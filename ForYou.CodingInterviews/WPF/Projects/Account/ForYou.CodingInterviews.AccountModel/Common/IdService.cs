using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace ForYou.CodingInterviews.AccountModel.Common
{
    public class IdService
    {
        private static long _last_id = 0;

        public static long NewId()
        {
            var id = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
            while (id <= _last_id)
            {
                Thread.Sleep(1);
                id = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
            }
            _last_id = id;

            return id;
        }
    }
}
