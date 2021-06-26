using System.Windows;
using ForYou.CodingInterviews.AccountModel;

namespace ForYou.CodingInterviews.Account
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        protected override void OnStartup(StartupEventArgs e)
        {
            AccountServiceProvider.Init();
            base.OnStartup(e);
        }

        protected override void OnExit(ExitEventArgs e)
        {
            AccountServiceProvider.Close();
            base.OnExit(e);
        }
    }
}
