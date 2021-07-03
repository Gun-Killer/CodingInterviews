using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class PlatformConsumeModelConfiguration : IEntityTypeConfiguration<PlatformConsumeModel>
    {
        public void Configure(EntityTypeBuilder<PlatformConsumeModel> builder)
        {
            builder.ToTable("PaltformConsume");
            builder.BaseBuild();
        }
    }
}
