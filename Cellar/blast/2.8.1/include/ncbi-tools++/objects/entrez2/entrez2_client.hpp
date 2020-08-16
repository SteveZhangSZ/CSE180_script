/* $Id: entrez2_client.hpp 481294 2015-10-08 14:03:49Z grichenk $
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 * Author:  Aaron Ucko, NCBI
 *
 * File Description:
 *   Entrez2 network client
 *
 * Remark:
 *   This code was originally generated by application DATATOOL
 *   using specifications from the data definition file
 *   'entrez2.asn'.
 */

#ifndef OBJECTS_ENTREZ2_ENTREZ2_CLIENT_HPP
#define OBJECTS_ENTREZ2_ENTREZ2_CLIENT_HPP


// generated includes
#include <objects/entrez2/entrez2_client_.hpp>

#include <objects/entrez2/Entrez2_link_set.hpp>
#include <objects/entrez2/Entrez2_link_count_list.hpp>
#include <objects/entrez2/Entrez2_docsum_list.hpp>


// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::


class NCBI_ENTREZ2_EXPORT CEntrez2Client : public CEntrez2Client_Base
{
    typedef CEntrez2Client_Base Tparent;
public:
    typedef TIntId TUid;

    // constructor
    CEntrez2Client(void);
    // destructor
    ~CEntrez2Client(void);

    /// A simplified interface for getting neighbors (links)
    
    /// Get ids of neigbors of a specified type.
    /// db is, e.g., "nucleotide" or "protein" (depending on the query).
    /// link_type is, for example, "nucleotide_nucleotide".

    /// This form just yields a vector of UIDs
    void GetNeighbors(TUid query_uid,
                      const string& db_from,
                      const string& db_to,
                      vector<TUid>& neighbor_uids);

    /// This form just yields a vector of UIDs, taking a vector of UIDs
    void GetNeighbors(const vector<TUid>& query_uids,
                      const string& db,
                      const string& link_type,
                      vector<TUid>& neighbor_uids);

    /// This form returns the entire CEntrez2_link_set object,
    /// which includes scores.
    CRef<CEntrez2_link_set> GetNeighbors(TUid query_uid,
                                         const string& db_from,
                                         const string& db_to);

    /// This form returns the entire CEntrez2_link_set object,
    /// which includes scores.
    CRef<CEntrez2_link_set> GetNeighbors(const vector<TUid>& query_uids,
                                         const string& db_from,
                                         const string& db_to);

    /// Retrieve counts of the various types of neighbors available
    CRef<CEntrez2_link_count_list> GetNeighborCounts(TUid query_uid,
                                                     const string& db);
    
    /// Some other simplified interfaces

    /// Query a db with a string, returning uids as integers
    void Query(const string& query,
               const string& db,
               vector<TUid>& result_uids,
               size_t start_offs = 0,
               size_t count = 0,
               TReply* reply = 0);

    /// Given some uids, a database, and an entrez query string,
    /// determine which of these uids match the query string.
    /// 
    /// Note: If a uid appears more than once in query_uids and
    /// matches the query string, it may or may not appear more
    /// more than once in the result.
    void FilterIds(const vector<TUid>& query_uids,
                   const string& db,
                   const string& query_string,
                   vector<TUid>& result_uids);

    /// Retrieve the docsums for a set of UIDs
    CRef<CEntrez2_docsum_list> GetDocsums(const vector<TUid>& uids,
                                          const string& db);

    /// Retrieve the docsums for a single UID
    CRef<CEntrez2_docsum_list> GetDocsums(TUid uid,
                                          const string& db);

#ifdef NCBI_STRICT_GI
    void GetNeighbors(TGi query_uid, const string& db_from,
                      const string& db_to,
                      vector<TGi>& neighbor_uids);
    void GetNeighbors(const vector<TGi>& query_uids,
                      const string& db,
                      const string& link_type,
                      vector<TGi>& neighbor_uids);
    CRef<CEntrez2_link_set> GetNeighbors(TGi query_uid,
                                         const string& db_from,
                                         const string& db_to);
    CRef<CEntrez2_link_set> GetNeighbors(const vector<TGi>& query_uids,
                                         const string& db_from,
                                         const string& db_to);
    CRef<CEntrez2_link_count_list> GetNeighborCounts(TGi query_uid,
                                                     const string& db);
    void Query(const string& query, const string& db,
               vector<TGi>& result_uids,
               size_t start_offs = 0, size_t count = 0,
               TReply* reply = 0);
    void FilterIds(const vector<TGi>& query_uids, const string& db,
                   const string& query_string,
                   vector<TGi>& result_uids);
    CRef<CEntrez2_docsum_list> GetDocsums(const vector<TGi>& uids,
                                          const string& db);
    CRef<CEntrez2_docsum_list> GetDocsums(TGi uid,
                                          const string& db);
#endif

protected:
    /// Get DB affinity of the request
    virtual string GetAffinity(const CEntrez2_request& request) const;

private:
    // Prohibit copy constructor and assignment operator
    CEntrez2Client(const CEntrez2Client& value);
    CEntrez2Client& operator=(const CEntrez2Client& value);
};



/////////////////// CEntrez2Client inline methods

// constructor
inline
CEntrez2Client::CEntrez2Client(void)
{
    SetDefaultRequest().SetTool("CEntrez2Client");
    SetDefaultRequest().SetVersion(1);
}


/////////////////// end of CEntrez2Client inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE

#endif // OBJECTS_ENTREZ2_ENTREZ2_CLIENT_HPP
/* Original file checksum: lines: 93, chars: 2440, CRC32: 16aa1713 */
