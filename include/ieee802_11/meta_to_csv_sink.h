#ifndef INCLUDED_IEEE802_11_META_TO_CSV_SINK_H
#define INCLUDED_IEEE802_11_META_TO_CSV_SINK_H
#include <gnuradio/block.h>
#include <ieee802_11/api.h>

namespace gr {
namespace ieee802_11 {

/*!
 * \brief <+description of block+>
 * \ingroup ieee802_11
 *
 */
class IEEE802_11_API meta_to_csv_sink : virtual public gr::block
{
public:
    typedef boost::shared_ptr<meta_to_csv_sink> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of ieee802_11::meta_to_csv_sink.
     *
     * To avoid accidental use of raw pointers, ieee802_11::meta_to_csv_sink's
     * constructor is in a private implementation
     * class. ieee802_11::meta_to_csv_sink::make is the public interface for
     * creating new instances.
     */
    static sptr
    make(const char* file_path, std::vector<std::string> keys, std::string delimiter);
};

} // namespace ieee802_11
} // namespace gr

#endif /* INCLUDED_IEEE802_11_META_TO_CSV_SINK_H */