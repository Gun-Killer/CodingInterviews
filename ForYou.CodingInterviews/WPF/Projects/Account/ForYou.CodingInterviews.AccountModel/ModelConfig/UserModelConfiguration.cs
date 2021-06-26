using System;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Builders;

namespace ForYou.CodingInterviews.AccountModel.ModelConfig
{
    public sealed class UserModelConfiguration : IEntityTypeConfiguration<UserModel>
    {
        public void Configure(EntityTypeBuilder<UserModel> builder)
        {
            builder.ToTable("User");

            builder.HasKey(t => t.Id);

            builder.BaseBuild();
        }
    }
}
