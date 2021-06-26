using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class RecordUserModelConfiguration : IEntityTypeConfiguration<RecordUserModel>
    {
        public void Configure(EntityTypeBuilder<RecordUserModel> builder)
        {
            builder.ToTable("RecordUser");

            builder.HasKey(t => t.Id);

            builder.BaseBuild();
        }
    }
}
