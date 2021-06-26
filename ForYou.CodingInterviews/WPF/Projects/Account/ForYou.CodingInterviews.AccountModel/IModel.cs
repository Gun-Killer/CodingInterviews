using System;

namespace ForYou.CodingInterviews.AccountModel
{
    public interface IModel
    {
        long Id { get; set; }

        DateTime CreatedTime { get; set; }

        long CreatedById { get; set; }

        string CreatedBy { get; set; }

        DateTime UpdatedTime { get; set; }

        long UpdatedById { get; set; }

        string UpdatedBy { get; set; }
    }

    public class BaseModel : IModel
    {
        public long Id { get; set; }

        public DateTime CreatedTime { get; set; }

        public long CreatedById { get; set; }

        public string CreatedBy { get; set; }

        public DateTime UpdatedTime { get; set; }

        public long UpdatedById { get; set; }

        public string UpdatedBy { get; set; }
    }
}
