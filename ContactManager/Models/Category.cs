using System.ComponentModel.DataAnnotations;

namespace ContactManager.Models
{
    public class Category
    {
        public int Id { get; set; }

        [Required]
        public string? AppUserId { get; set; }

        [Required]
        [Display ( Name = "Category Name")]
        public string? Name { get; set; }

        // Virtuals
        public virtual AppUser? AppUser { get; set; }
        public ICollection<Contact> Contacts { get; set; } = new HashSet<Contact> ();
    }
}
