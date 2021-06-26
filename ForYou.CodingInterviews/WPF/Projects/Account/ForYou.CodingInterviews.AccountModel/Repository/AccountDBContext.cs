using Microsoft.EntityFrameworkCore;

namespace ForYou.CodingInterviews.AccountModel.Repository
{
    public sealed class AccountDBContext : DbContext
    {
        public AccountDBContext(DbContextOptions<AccountDBContext> options)
            : base(options)
        {

        }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.ApplyConfigurationsFromAssembly(GetType().Assembly);
            base.OnModelCreating(modelBuilder);
        }
    }
}
