using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    internal static class ModelConfigrationExtension
    {
        public static EntityTypeBuilder<T> BaseBuild<T>(this EntityTypeBuilder<T> builder)
            where T : class, IModel
        {
            //builder.Property(t => t.CreatedTime).ValueGeneratedOnAdd();
            //builder.Property(t => t.UpdatedTime).ValueGeneratedOnAddOrUpdate();
            return builder;
        }
    }
}
