using System;
using System.IO;
using ForYou.CodingInterviews.AccountModel.Repository;
using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.DependencyInjection;

namespace ForYou.CodingInterviews.AccountModel
{
    public class AccountServiceProvider
    {
        public static AccountServiceProvider Instance;

        private static IServiceProvider _provider;

        private AccountServiceProvider()
        {

        }
        public static void Init()
        {
            ServiceCollection services = new ServiceCollection();
            var dbPath = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, @"Resource\DB");
            if (Directory.Exists(dbPath) == false)
            {
                Directory.CreateDirectory(dbPath);
            }

            services.AddDbContextPool<AccountDBContext>(options =>
            {
                options.UseSqlite(@"Data Source=Resource\DB\Account.db;");
            });
            services.AddScoped<IUserModelRepository, UserModelRepository>();
            services.AddScoped<IRecordModelRepository, RecordModelRepository>();
            services.AddScoped<IRecordUserModelRepository, RecordUserModelRepository>();
            services.AddScoped<ICategoryModelRepository, CategoryModelRepository>();
            services.AddScoped<IModeOfPaymentModelRepository, ModeOfPaymentModelRepository>();
            services.AddScoped<IAccountPaymentModelRepository, AccountPaymentModelRepository>();
            services.AddScoped<IModePaymentWithAccountModelRepository, ModePaymentWithAccountModelRepository>();
            services.AddScoped<IPlatformConsumeModelRepository, PlatformConsumeModelRepository>();
            services.AddScoped<IRecordAccountAmountModelRepository, RecordAccountAmountModelRepository>();

            _provider = services.BuildServiceProvider();
            Instance = new AccountServiceProvider();
            EnsureDBCreate();
        }

        private static void EnsureDBCreate()
        {
            using (var scope = _provider.CreateScope())
            {
                var db = scope.ServiceProvider.GetService<AccountDBContext>();
                db?.Database.EnsureCreated();
                db?.Database.Migrate();
            }
        }

        public static void Close()
        {

        }

        public T GetService<T>()
        {
            return _provider.GetService<T>();
        }
    }
}
