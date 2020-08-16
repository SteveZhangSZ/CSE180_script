/* $Id$
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

/// @file GC_SequenceStats_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'genome_collection.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENOMECOLL_GC_SEQUENCESTATS_BASE_HPP
#define OBJECTS_GENOMECOLL_GC_SEQUENCESTATS_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CGC_Scaf_stats;


// generated classes

/////////////////////////////////////////////////////////////////////////////
/// Stats of complex objects
/// Used at assembly and chromosome levels
class NCBI_GENOME_COLLECTION_EXPORT CGC_SequenceStats_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGC_SequenceStats_Base(void);
    // destructor
    virtual ~CGC_SequenceStats_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    // types
    typedef list< CRef< CGC_Scaf_stats > > TAll_scaf;
    typedef list< CRef< CGC_Scaf_stats > > TOrdered_scaf;
    typedef list< CRef< CGC_Scaf_stats > > TUnordered_scaf;
    typedef list< CRef< CGC_Scaf_stats > > TUnplaced_scaf;
    typedef list< CRef< CGC_Scaf_stats > > TAligned_scaf;
    typedef list< CRef< CGC_Scaf_stats > > TUnaligned_scaf;

    // member index
    enum class E_memberIndex {
        e__allMandatory = 0,
        e_all_scaf,
        e_ordered_scaf,
        e_unordered_scaf,
        e_unplaced_scaf,
        e_aligned_scaf,
        e_unaligned_scaf
    };
    typedef Tparent::CMemberIndex<E_memberIndex, 7> TmemberIndex;

    // getters
    // setters

    /// mandatory
    /// typedef list< CRef< CGC_Scaf_stats > > TAll_scaf
    ///  Check whether the All_scaf data member has been assigned a value.
    bool IsSetAll_scaf(void) const;
    /// Check whether it is safe or not to call GetAll_scaf method.
    bool CanGetAll_scaf(void) const;
    void ResetAll_scaf(void);
    const TAll_scaf& GetAll_scaf(void) const;
    TAll_scaf& SetAll_scaf(void);

    /// mandatory
    /// typedef list< CRef< CGC_Scaf_stats > > TOrdered_scaf
    ///  Check whether the Ordered_scaf data member has been assigned a value.
    bool IsSetOrdered_scaf(void) const;
    /// Check whether it is safe or not to call GetOrdered_scaf method.
    bool CanGetOrdered_scaf(void) const;
    void ResetOrdered_scaf(void);
    const TOrdered_scaf& GetOrdered_scaf(void) const;
    TOrdered_scaf& SetOrdered_scaf(void);

    ///
    /// mandatory
    /// typedef list< CRef< CGC_Scaf_stats > > TUnordered_scaf
    ///  Check whether the Unordered_scaf data member has been assigned a value.
    bool IsSetUnordered_scaf(void) const;
    /// Check whether it is safe or not to call GetUnordered_scaf method.
    bool CanGetUnordered_scaf(void) const;
    void ResetUnordered_scaf(void);
    const TUnordered_scaf& GetUnordered_scaf(void) const;
    TUnordered_scaf& SetUnordered_scaf(void);

    /// unplaced at full assembly level
    /// optional
    /// typedef list< CRef< CGC_Scaf_stats > > TUnplaced_scaf
    ///  Check whether the Unplaced_scaf data member has been assigned a value.
    bool IsSetUnplaced_scaf(void) const;
    /// Check whether it is safe or not to call GetUnplaced_scaf method.
    bool CanGetUnplaced_scaf(void) const;
    void ResetUnplaced_scaf(void);
    const TUnplaced_scaf& GetUnplaced_scaf(void) const;
    TUnplaced_scaf& SetUnplaced_scaf(void);

    /// aligned at full assembly level
    /// optional
    /// typedef list< CRef< CGC_Scaf_stats > > TAligned_scaf
    ///  Check whether the Aligned_scaf data member has been assigned a value.
    bool IsSetAligned_scaf(void) const;
    /// Check whether it is safe or not to call GetAligned_scaf method.
    bool CanGetAligned_scaf(void) const;
    void ResetAligned_scaf(void);
    const TAligned_scaf& GetAligned_scaf(void) const;
    TAligned_scaf& SetAligned_scaf(void);

    /// unaligned at full assembly level
    /// optional
    /// typedef list< CRef< CGC_Scaf_stats > > TUnaligned_scaf
    ///  Check whether the Unaligned_scaf data member has been assigned a value.
    bool IsSetUnaligned_scaf(void) const;
    /// Check whether it is safe or not to call GetUnaligned_scaf method.
    bool CanGetUnaligned_scaf(void) const;
    void ResetUnaligned_scaf(void);
    const TUnaligned_scaf& GetUnaligned_scaf(void) const;
    TUnaligned_scaf& SetUnaligned_scaf(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGC_SequenceStats_Base(const CGC_SequenceStats_Base&);
    CGC_SequenceStats_Base& operator=(const CGC_SequenceStats_Base&);

    // data
    Uint4 m_set_State[1];
    list< CRef< CGC_Scaf_stats > > m_All_scaf;
    list< CRef< CGC_Scaf_stats > > m_Ordered_scaf;
    list< CRef< CGC_Scaf_stats > > m_Unordered_scaf;
    list< CRef< CGC_Scaf_stats > > m_Unplaced_scaf;
    list< CRef< CGC_Scaf_stats > > m_Aligned_scaf;
    list< CRef< CGC_Scaf_stats > > m_Unaligned_scaf;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
bool CGC_SequenceStats_Base::IsSetAll_scaf(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGC_SequenceStats_Base::CanGetAll_scaf(void) const
{
    return true;
}

inline
const CGC_SequenceStats_Base::TAll_scaf& CGC_SequenceStats_Base::GetAll_scaf(void) const
{
    return m_All_scaf;
}

inline
CGC_SequenceStats_Base::TAll_scaf& CGC_SequenceStats_Base::SetAll_scaf(void)
{
    m_set_State[0] |= 0x1;
    return m_All_scaf;
}

inline
bool CGC_SequenceStats_Base::IsSetOrdered_scaf(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGC_SequenceStats_Base::CanGetOrdered_scaf(void) const
{
    return true;
}

inline
const CGC_SequenceStats_Base::TOrdered_scaf& CGC_SequenceStats_Base::GetOrdered_scaf(void) const
{
    return m_Ordered_scaf;
}

inline
CGC_SequenceStats_Base::TOrdered_scaf& CGC_SequenceStats_Base::SetOrdered_scaf(void)
{
    m_set_State[0] |= 0x4;
    return m_Ordered_scaf;
}

inline
bool CGC_SequenceStats_Base::IsSetUnordered_scaf(void) const
{
    return ((m_set_State[0] & 0x30) != 0);
}

inline
bool CGC_SequenceStats_Base::CanGetUnordered_scaf(void) const
{
    return true;
}

inline
const CGC_SequenceStats_Base::TUnordered_scaf& CGC_SequenceStats_Base::GetUnordered_scaf(void) const
{
    return m_Unordered_scaf;
}

inline
CGC_SequenceStats_Base::TUnordered_scaf& CGC_SequenceStats_Base::SetUnordered_scaf(void)
{
    m_set_State[0] |= 0x10;
    return m_Unordered_scaf;
}

inline
bool CGC_SequenceStats_Base::IsSetUnplaced_scaf(void) const
{
    return ((m_set_State[0] & 0xc0) != 0);
}

inline
bool CGC_SequenceStats_Base::CanGetUnplaced_scaf(void) const
{
    return true;
}

inline
const CGC_SequenceStats_Base::TUnplaced_scaf& CGC_SequenceStats_Base::GetUnplaced_scaf(void) const
{
    return m_Unplaced_scaf;
}

inline
CGC_SequenceStats_Base::TUnplaced_scaf& CGC_SequenceStats_Base::SetUnplaced_scaf(void)
{
    m_set_State[0] |= 0x40;
    return m_Unplaced_scaf;
}

inline
bool CGC_SequenceStats_Base::IsSetAligned_scaf(void) const
{
    return ((m_set_State[0] & 0x300) != 0);
}

inline
bool CGC_SequenceStats_Base::CanGetAligned_scaf(void) const
{
    return true;
}

inline
const CGC_SequenceStats_Base::TAligned_scaf& CGC_SequenceStats_Base::GetAligned_scaf(void) const
{
    return m_Aligned_scaf;
}

inline
CGC_SequenceStats_Base::TAligned_scaf& CGC_SequenceStats_Base::SetAligned_scaf(void)
{
    m_set_State[0] |= 0x100;
    return m_Aligned_scaf;
}

inline
bool CGC_SequenceStats_Base::IsSetUnaligned_scaf(void) const
{
    return ((m_set_State[0] & 0xc00) != 0);
}

inline
bool CGC_SequenceStats_Base::CanGetUnaligned_scaf(void) const
{
    return true;
}

inline
const CGC_SequenceStats_Base::TUnaligned_scaf& CGC_SequenceStats_Base::GetUnaligned_scaf(void) const
{
    return m_Unaligned_scaf;
}

inline
CGC_SequenceStats_Base::TUnaligned_scaf& CGC_SequenceStats_Base::SetUnaligned_scaf(void)
{
    m_set_State[0] |= 0x400;
    return m_Unaligned_scaf;
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GC_SEQUENCESTATS_BASE_HPP
