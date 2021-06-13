namespace ForYou.CodingInterviews.Extension
{
    public static class ObjectExtension
    {
        public static bool IsNull(this object input)
        {
            return input == null;
        }

        public static bool NotNull(this object input)
        {
            return input != null;
        }
    }
}
