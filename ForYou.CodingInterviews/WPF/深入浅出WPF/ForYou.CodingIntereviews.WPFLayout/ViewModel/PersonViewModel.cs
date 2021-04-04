using ForYou.CodingIntereviews.WPFLayout.Models;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ForYou.CodingIntereviews.WPFLayout.ViewModel
{
    public class PersonViewModel : ViewModelBase
    {
        public PersonViewModel()
        {
            Add = new RelayCommand(() =>
              {
                  gridList.Add(new Person()
                  {
                      Name = nameText
                  });
              });
        }

        public string AgeText
        {
            get => ageText; set
            {
                ageText = value; RaisePropertyChanged();
            }
        }
        public string NameText
        {
            get => nameText; set
            {
                nameText = value;
                RaisePropertyChanged();
            }
        }

        private ObservableCollection<Person> gridList;
        private string ageText;
        private string nameText;

        public ObservableCollection<Person> GridList
        {
            get => gridList; set
            {
                gridList = value;
                RaisePropertyChanged();
            }
        }

        public RelayCommand Add { get; set; }

    }
}
