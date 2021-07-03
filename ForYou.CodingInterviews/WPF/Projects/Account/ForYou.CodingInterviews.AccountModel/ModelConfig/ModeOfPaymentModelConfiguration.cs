using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class ModeOfPaymentModelConfiguration : IEntityTypeConfiguration<ModeOfPaymentModel>
    {
        public void Configure(EntityTypeBuilder<ModeOfPaymentModel> builder)
        {
            builder.ToTable("ModelOfPayment");
            builder.BaseBuild();
        }
    }
}
