/* $Id: Seq_submit.hpp 133884 2008-07-15 14:55:27Z ucko $
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
 */

/// @file Seq_submit.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'submit.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: Seq_submit_.hpp


#ifndef OBJECTS_SUBMIT_SEQ_SUBMIT_HPP
#define OBJECTS_SUBMIT_SEQ_SUBMIT_HPP


// generated includes
#include <objects/submit/Seq_submit_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

/////////////////////////////////////////////////////////////////////////////
class NCBI_SUBMIT_EXPORT CSeq_submit : public CSeq_submit_Base
{
    typedef CSeq_submit_Base Tparent;
public:
    // constructor
    CSeq_submit(void);
    // destructor
    ~CSeq_submit(void);

    // check submit type
    bool IsEntrys(void) const;
    bool IsAnnots(void) const;
    bool IsDelete(void) const;
    
private:
    // Prohibit copy constructor and assignment operator
    CSeq_submit(const CSeq_submit& value);
    CSeq_submit& operator=(const CSeq_submit& value);

};

/////////////////// CSeq_submit inline methods

// constructor
inline
CSeq_submit::CSeq_submit(void)
{
}


/////////////////// end of CSeq_submit inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SUBMIT_SEQ_SUBMIT_HPP
/* Original file checksum: lines: 86, chars: 2429, CRC32: 95ecd38 */
