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

/// @file GC_Replicon_.hpp
/// Data storage class.
///
/// This file was generated by application DATATOOL
/// using the following specifications:
/// 'genome_collection.asn'.
///
/// ATTENTION:
///   Don't edit or commit this file into CVS as this file will
///   be overridden (by DATATOOL) without warning!

#ifndef OBJECTS_GENOMECOLL_GC_REPLICON_BASE_HPP
#define OBJECTS_GENOMECOLL_GC_REPLICON_BASE_HPP

// standard includes
#include <serial/serialbase.hpp>

// generated includes
#include <list>
#include <string>

BEGIN_NCBI_SCOPE

#ifndef BEGIN_objects_SCOPE
#  define BEGIN_objects_SCOPE BEGIN_SCOPE(objects)
#  define END_objects_SCOPE END_SCOPE(objects)
#endif
BEGIN_objects_SCOPE // namespace ncbi::objects::


// forward declarations
class CGC_Sequence;


// generated classes

/////////////////////////////////////////////////////////////////////////////
class NCBI_GENOME_COLLECTION_EXPORT CGC_Replicon_Base : public CSerialObject
{
    typedef CSerialObject Tparent;
public:
    // constructor
    CGC_Replicon_Base(void);
    // destructor
    virtual ~CGC_Replicon_Base(void);

    // type info
    DECLARE_INTERNAL_TYPE_INFO();

    /////////////////////////////////////////////////////////////////////////////
    /// the sequence(s) representing this molecule
    /// in the case of 2L and 2R - the molecule is represented by
    /// several sequences, and there is no seq-id of "chr 2" as a whole.
    class NCBI_GENOME_COLLECTION_EXPORT C_Sequence : public CSerialObject
    {
        typedef CSerialObject Tparent;
    public:
        // constructor
        C_Sequence(void);
        // destructor
        ~C_Sequence(void);
    
        // type info
        DECLARE_INTERNAL_TYPE_INFO();
    
    
        /// Choice variants.
        enum E_Choice {
            e_not_set = 0,  ///< No variant selected
            e_Single,
            e_Set
        };
        /// Maximum+1 value of the choice variant enumerator.
        enum E_ChoiceStopper {
            e_MaxChoice = 3 ///< == e_Set+1
        };
    
        /// Reset the whole object
        void Reset(void);
    
        /// Reset the selection (set it to e_not_set).
        void ResetSelection(void);
    
        /// Which variant is currently selected.
        E_Choice Which(void) const;
    
        /// Verify selection, throw exception if it differs from the expected.
        void CheckSelected(E_Choice index) const;
    
        /// Throw 'InvalidSelection' exception.
        NCBI_NORETURN void ThrowInvalidSelection(E_Choice index) const;
    
        /// Retrieve selection name (for diagnostic purposes).
        static string SelectionName(E_Choice index);
    
        /// Select the requested variant if needed.
        void Select(E_Choice index, EResetVariant reset = eDoResetVariant);
        /// Select the requested variant if needed,
        /// allocating CObject variants from memory pool.
        void Select(E_Choice index,
                    EResetVariant reset,
                    CObjectMemoryPool* pool);
    
        // types
        typedef CGC_Sequence TSingle;
        typedef list< CRef< CGC_Sequence > > TSet;
    
        // getters
        // setters
    
        // typedef CGC_Sequence TSingle
        bool IsSingle(void) const;
        const TSingle& GetSingle(void) const;
        TSingle& SetSingle(void);
        void SetSingle(TSingle& value);
    
        // typedef list< CRef< CGC_Sequence > > TSet
        bool IsSet(void) const;
        const TSet& GetSet(void) const;
        TSet& SetSet(void);
    
    
    private:
        // copy constructor and assignment operator
        C_Sequence(const C_Sequence& );
        C_Sequence& operator=(const C_Sequence& );
        // choice state
        E_Choice m_choice;
        // helper methods
        void DoSelect(E_Choice index, CObjectMemoryPool* pool = 0);
    
        static const char* const sm_SelectionNames[];
        // data
        union {
            NCBI_NS_NCBI::CUnionBuffer<TSet> m_Set;
            NCBI_NS_NCBI::CSerialObject *m_object;
        };
    };
    // types
    typedef string TName;
    typedef string TLocal_name;
    typedef C_Sequence TSequence;

    // member index
    enum class E_memberIndex {
        e__allMandatory = 0,
        e_name,
        e_local_name,
        e_sequence
    };
    typedef Tparent::CMemberIndex<E_memberIndex, 4> TmemberIndex;

    // getters
    // setters

    /// name for this molecule
    /// the official name,
    /// optional
    /// typedef string TName
    ///  Check whether the Name data member has been assigned a value.
    bool IsSetName(void) const;
    /// Check whether it is safe or not to call GetName method.
    bool CanGetName(void) const;
    void ResetName(void);
    const TName& GetName(void) const;
    void SetName(const TName& value);
    TName& SetName(void);

    /// If the chromosome has a different name in this assembly.
    /// optional
    /// typedef string TLocal_name
    ///  Check whether the Local_name data member has been assigned a value.
    bool IsSetLocal_name(void) const;
    /// Check whether it is safe or not to call GetLocal_name method.
    bool CanGetLocal_name(void) const;
    void ResetLocal_name(void);
    const TLocal_name& GetLocal_name(void) const;
    void SetLocal_name(const TLocal_name& value);
    TLocal_name& SetLocal_name(void);

    /// mandatory
    /// typedef C_Sequence TSequence
    ///  Check whether the Sequence data member has been assigned a value.
    bool IsSetSequence(void) const;
    /// Check whether it is safe or not to call GetSequence method.
    bool CanGetSequence(void) const;
    void ResetSequence(void);
    const TSequence& GetSequence(void) const;
    void SetSequence(TSequence& value);
    TSequence& SetSequence(void);

    /// Reset the whole object
    virtual void Reset(void);


private:
    // Prohibit copy constructor and assignment operator
    CGC_Replicon_Base(const CGC_Replicon_Base&);
    CGC_Replicon_Base& operator=(const CGC_Replicon_Base&);

    // data
    Uint4 m_set_State[1];
    string m_Name;
    string m_Local_name;
    CRef< TSequence > m_Sequence;
};






///////////////////////////////////////////////////////////
///////////////////// inline methods //////////////////////
///////////////////////////////////////////////////////////
inline
CGC_Replicon_Base::C_Sequence::E_Choice CGC_Replicon_Base::C_Sequence::Which(void) const
{
    return m_choice;
}

inline
void CGC_Replicon_Base::C_Sequence::CheckSelected(E_Choice index) const
{
    if ( m_choice != index )
        ThrowInvalidSelection(index);
}

inline
void CGC_Replicon_Base::C_Sequence::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset, NCBI_NS_NCBI::CObjectMemoryPool* pool)
{
    if ( reset == NCBI_NS_NCBI::eDoResetVariant || m_choice != index ) {
        if ( m_choice != e_not_set )
            ResetSelection();
        DoSelect(index, pool);
    }
}

inline
void CGC_Replicon_Base::C_Sequence::Select(E_Choice index, NCBI_NS_NCBI::EResetVariant reset)
{
    Select(index, reset, 0);
}

inline
bool CGC_Replicon_Base::C_Sequence::IsSingle(void) const
{
    return m_choice == e_Single;
}

inline
bool CGC_Replicon_Base::C_Sequence::IsSet(void) const
{
    return m_choice == e_Set;
}

inline
const CGC_Replicon_Base::C_Sequence::TSet& CGC_Replicon_Base::C_Sequence::GetSet(void) const
{
    CheckSelected(e_Set);
    return *m_Set;
}

inline
CGC_Replicon_Base::C_Sequence::TSet& CGC_Replicon_Base::C_Sequence::SetSet(void)
{
    Select(e_Set, NCBI_NS_NCBI::eDoNotResetVariant);
    return *m_Set;
}

inline
bool CGC_Replicon_Base::IsSetName(void) const
{
    return ((m_set_State[0] & 0x3) != 0);
}

inline
bool CGC_Replicon_Base::CanGetName(void) const
{
    return IsSetName();
}

inline
const CGC_Replicon_Base::TName& CGC_Replicon_Base::GetName(void) const
{
    if (!CanGetName()) {
        ThrowUnassigned(0);
    }
    return m_Name;
}

inline
void CGC_Replicon_Base::SetName(const CGC_Replicon_Base::TName& value)
{
    m_Name = value;
    m_set_State[0] |= 0x3;
}

inline
CGC_Replicon_Base::TName& CGC_Replicon_Base::SetName(void)
{
#ifdef _DEBUG
    if (!IsSetName()) {
        m_Name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x1;
    return m_Name;
}

inline
bool CGC_Replicon_Base::IsSetLocal_name(void) const
{
    return ((m_set_State[0] & 0xc) != 0);
}

inline
bool CGC_Replicon_Base::CanGetLocal_name(void) const
{
    return IsSetLocal_name();
}

inline
const CGC_Replicon_Base::TLocal_name& CGC_Replicon_Base::GetLocal_name(void) const
{
    if (!CanGetLocal_name()) {
        ThrowUnassigned(1);
    }
    return m_Local_name;
}

inline
void CGC_Replicon_Base::SetLocal_name(const CGC_Replicon_Base::TLocal_name& value)
{
    m_Local_name = value;
    m_set_State[0] |= 0xc;
}

inline
CGC_Replicon_Base::TLocal_name& CGC_Replicon_Base::SetLocal_name(void)
{
#ifdef _DEBUG
    if (!IsSetLocal_name()) {
        m_Local_name = UnassignedString();
    }
#endif
    m_set_State[0] |= 0x4;
    return m_Local_name;
}

inline
bool CGC_Replicon_Base::IsSetSequence(void) const
{
    return m_Sequence.NotEmpty();
}

inline
bool CGC_Replicon_Base::CanGetSequence(void) const
{
    return true;
}

inline
const CGC_Replicon_Base::TSequence& CGC_Replicon_Base::GetSequence(void) const
{
    if ( !m_Sequence ) {
        const_cast<CGC_Replicon_Base*>(this)->ResetSequence();
    }
    return (*m_Sequence);
}

inline
CGC_Replicon_Base::TSequence& CGC_Replicon_Base::SetSequence(void)
{
    if ( !m_Sequence ) {
        ResetSequence();
    }
    return (*m_Sequence);
}

///////////////////////////////////////////////////////////
////////////////// end of inline methods //////////////////
///////////////////////////////////////////////////////////





END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_GENOMECOLL_GC_REPLICON_BASE_HPP
