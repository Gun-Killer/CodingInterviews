using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class ModePaymentWithAccountModelConfiguration : IEntityTypeConfiguration<ModePaymentWithAccountModel>
    {
        public void Configure(EntityTypeBuilder<ModePaymentWithAccountModel> builder)
        {
            builder.ToTable("ModePaymentAccount");
            builder.BaseBuild();
        }
    }
}
