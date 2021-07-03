using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class AccountPaymentModelConfiguration : IEntityTypeConfiguration<AccountPaymentModel>
    {
        public void Configure(EntityTypeBuilder<AccountPaymentModel> builder)
        {
            builder.ToTable("AccountPayment");
            builder.BaseBuild();
        }
    }
}
