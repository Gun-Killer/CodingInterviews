using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class RecordAccountAmountModelConfiguration : IEntityTypeConfiguration<RecordAccountAmountModel>
    {
        public void Configure(EntityTypeBuilder<RecordAccountAmountModel> builder)
        {
            builder.ToTable("RecordAccountAmount");

            builder.BaseBuild();
        }
    }
}
