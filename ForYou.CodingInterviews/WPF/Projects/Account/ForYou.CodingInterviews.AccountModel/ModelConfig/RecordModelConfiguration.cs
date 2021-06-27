using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class RecordModelConfiguration : IEntityTypeConfiguration<RecordModel>
    {
        public void Configure(EntityTypeBuilder<RecordModel> builder)
        {
            builder.ToTable("Record");

            builder.HasKey(t => t.Id);

            builder.Property(t => t.Remark).IsRequired(false);
            builder.BaseBuild();
        }
    }
}
