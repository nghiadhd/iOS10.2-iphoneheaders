/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSDContainerInfo.h>
#import <iWorkImport/TSWPStorageParent.h>
#import <iWorkImport/TSSStyleClient.h>
#import <iWorkImport/TSWPTextSource.h>

@protocol TSDContainerInfo, TSDOwningAttachment;
@class NSMutableString, TSWPStorageBroadcaster, TSWPDocumentRoot, TSSStylesheet, NSObject, TSPObject, TSTTableInfo, NSString, TSDInfoGeometry;

@interface TSWPStorage : TSPObject <TSDContainerInfo, TSWPStorageParent, TSSStyleClient, TSWPTextSource> {

	NSMutableString* _string;
	TSWPAttributeArray* _attributesTable[19];
	TSWPStorageBroadcaster* _broadcaster;
	TSWPDocumentRoot* _documentRoot;
	TSSStylesheet* _stylesheet;
	BOOL _dolcSuppressed;
	unsigned long long _changeCount;
	int _WPKind;
	NSObject*<TSDContainerInfo> _parentInfo;
	TSPObject*<TSDOwningAttachment> _owningAttachment;
	unsigned _disallowElementKinds;
	unsigned _disallowSmartFieldKinds;
	int _writingDirectionCache;
	unsigned long long _charIndexForWord;
	NSRange _wordAtCharIndex;
	BOOL _includePreviousWord;
	BOOL _includeHyphenation;
	unsigned long long _wordAtCharIndexChangeCount;
	BOOL _isInInit;
	BOOL _ignoreContentsChangedNotifications;

}

@property (assign,nonatomic) TSUCellCoord hyperlinkCellID; 
@property (getter=tst_tableInfo,nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,retain) TSSStylesheet * stylesheet; 
@property (nonatomic,readonly) BOOL hasTrackedChanges; 
@property (nonatomic,readonly) TSWPChangeAttributeArray* insertionChangesTable; 
@property (nonatomic,readonly) TSWPChangeAttributeArray* deletionChangesTable; 
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,readonly) BOOL isInInit;                                                          //@synthesize isInInit=_isInInit - In the implementation block
@property (assign,nonatomic) BOOL ignoreContentsChangedNotifications;                                  //@synthesize ignoreContentsChangedNotifications=_ignoreContentsChangedNotifications - In the implementation block
@property (nonatomic,readonly) unsigned long long changeCount;                                         //@synthesize changeCount=_changeCount - In the implementation block
@property (nonatomic,readonly) TSSStylesheet * stylesheet;                                             //@synthesize stylesheet=_stylesheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo;                                   //@synthesize parentInfo=_parentInfo - In the implementation block
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment;                         //@synthesize owningAttachment=_owningAttachment - In the implementation block
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (nonatomic,readonly) long long contentWritingDirection; 
+(BOOL)needsObjectUUID;
+(id)newObjectForUnarchiver:(id)arg1 ;
+(void)resetDisallowedElementKinds;
+(void)resetDisallowedSmartFieldKinds;
+(id)filterText:(id)arg1 removingAttachments:(BOOL)arg2 ;
+(Class)pStringClassForWPKind:(int)arg1 ;
+(void)setDisallowedElementKinds:(unsigned)arg1 forStorageKind:(int)arg2 ;
+(BOOL)allowsElementKind:(int)arg1 forStorageKind:(int)arg2 ;
+(void)setDisallowedSmartFieldKinds:(unsigned)arg1 forStorageKind:(int)arg2 ;
+(BOOL)allowsSmartFieldKind:(int)arg1 forStorageKind:(int)arg2 ;
+(id)filterText:(id)arg1 ;
+(id)filterMarkAttributes:(id)arg1 ;
+(TSWPAttributeArray*)createEmptyAttributeArrayForKind:(int)arg1 ;
+(id)plainTextPasteStringForStorages:(id)arg1 forcePlainText:(BOOL)arg2 ;
+(TSWPAttributeArray*)createAttributeArrayForKind:(int)arg1 actionState:(TSWPStorageActionState*)arg2 ;
+(void)initialize;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)objectUUIDPath;
-(id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 ;
-(void)addSmartField:(id)arg1 toRange:(NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)setCharacterStyle:(id)arg1 range:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)storageByApplyingCustomFormat:(id)arg1 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 stylesheet:(id)arg3 kind:(int)arg4 ;
-(void)insertStorage:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(int)wpKind;
-(NSRange)textRangeForParagraphAtIndex:(unsigned long long)arg1 ;
-(void)setParagraphStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)insertString:(id)arg1 atCharIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withStorage:(id)arg2 usePasteRules:(BOOL)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)canBeStoredInAStringValueCell;
-(id)newSubstorageWithRange:(NSRange)arg1 context:(id)arg2 flags:(unsigned)arg3 ;
-(void)uppercaseWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 ;
-(void)lowercaseWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 ;
-(void)capitalizeWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 ;
-(id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)enumerateWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)firstHighlightForSelectionRange:(NSRange)arg1 outRange:(NSRange*)arg2 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)nonUndoableSetWPKind:(int)arg1 ;
-(void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1 ;
-(id)referencedStylesOfClass:(Class)arg1 ;
-(void)setParagraphWritingDirection:(int)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)rangesForLocalization;
-(NSRange)attachmentIndexRangeForTextRange:(NSRange)arg1 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 notifyObservers:(BOOL)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned long long)characterStyleAttributeCount;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(Class)repClass;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(id)childInfos;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isAttachedToBodyText;
-(BOOL)isThemeContent;
-(BOOL)isInlineWithText;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(id)uuidPathPrefixComponentsProvider;
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(id)i_copyIntoContext:(id)arg1 stylesheet:(id)arg2 paragraphStyle:(id)arg3 listStyle:(id)arg4 bakeModes:(BOOL)arg5 resettingHostTableToMatch:(id)arg6 referenceColorHelper:(id)arg7 disableMenus:(BOOL)arg8 ;
-(id)attachmentAtAttachmentIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long*)arg2 ;
-(id)p_processEndNode:(id)arg1 startNode:(id)arg2 bakeModes:(BOOL)arg3 tokenDict:(id)arg4 ;
-(void)deleteRange:(NSRange)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 ;
-(void)enumerateAttachmentsOfClass:(Class)arg1 inTextRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSRange)p_rangeOfString:(id)arg1 orNodeClass:(Class)arg2 range:(NSRange)arg3 ;
-(void)takeText:(id)arg1 andSetLanguage:(id)arg2 ;
-(void)setLanguage:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)stringWithFormulaPlainTextFromRange:(NSRange)arg1 ;
-(id)p_stringWithFormulaAsTextFromRange:(NSRange)arg1 returningTokenValues:(BOOL)arg2 ;
-(id)stringWithFormulaDetokenizedTextFromRange:(NSRange)arg1 ;
-(id)i_copyIntoContext:(id)arg1 stylesheet:(id)arg2 ;
-(BOOL)hasDamagedTokenAttachments;
-(BOOL)isFormulaSyntaxErrorEqual:(id)arg1 ;
-(NSRange)rangeOfLetWithinRange:(NSRange)arg1 ;
-(NSRange)rangeOfInWithinRange:(NSRange)arg1 ;
-(unsigned long long)previousNonWhitespaceOrNewlineIndexStartingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextNonWhitespaceOrNewlineIndexStartingAtIndex:(unsigned long long)arg1 ;
-(void)takeText:(id)arg1 ;
-(void)insertUIGraphicalAttachment:(id)arg1 ;
-(id)stringWithFormulaPlainText;
-(id)stringWithFormulaDetokenizedText;
-(unsigned long long)attachmentCount;
-(NSRange)rangeForCellID:(TSUCellCoord)arg1 includingBreak:(BOOL)arg2 ;
-(id)newSubstorageWithRange:(NSRange)arg1 context:(id)arg2 flags:(unsigned)arg3 kind:(int)arg4 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)textIsVertical;
-(long long)contentWritingDirection;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 ;
-(int)writingDirectionForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(int)compareRange:(NSRange)arg1 otherStorage:(id)arg2 otherRange:(NSRange)arg3 options:(unsigned long long)arg4 styleComparisonBlock:(/*^block*/id)arg5 ;
-(int)writingDirectionForParagraphAtParIndex:(unsigned long long)arg1 ;
-(id)attachmentAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 changeSession:(id)arg5 ;
-(BOOL)hasAttachmentsThatChangeWithPageNumberOrPageCount;
-(TSUCellCoord)hyperlinkCellID;
-(id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(NSRange)arg2 ;
-(void)setHyperlinkCellID:(TSUCellCoord)arg1 ;
-(unsigned long long)listStartAtCharIndex:(unsigned long long)arg1 ;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 ;
-(BOOL)changesWithPageCount;
-(void)stashBroadcaster;
-(void)unstashBroadcaster;
-(void)nonUndoableAppendStoragePreservingEmphasis:(id)arg1 ;
-(id)tst_tableInfo;
-(unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1 ;
-(unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeMappedToStorage:(NSRange)arg1 ;
-(NSRange)charRangeMappedFromStorage:(NSRange)arg1 ;
-(unsigned long long)paragraphIndexAtCharIndex:(unsigned long long)arg1 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(NSRange)arg1 styleProvider:(id)arg2 requireHidden:(BOOL)arg3 ;
-(BOOL)isInInit;
-(id)listStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)listStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1 ;
-(unsigned short)paragraphFlagsAtCharIndex:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 string:(id)arg2 kind:(int)arg3 stylesheet:(id)arg4 paragraphStyle:(id)arg5 listStyle:(id)arg6 section:(id)arg7 columnStyle:(id)arg8 paragraphDirection:(int)arg9 ;
-(void)nonUndoableInsertObject:(id)arg1 charIndex:(unsigned long long)arg2 attributeArray:(TSWPAttributeArray*)arg3 attributeIndex:(unsigned long long)arg4 dolcContext:(id)arg5 ;
-(void)nonUndoableInsertParagraphData:(TSWPParagraphData)arg1 charIndex:(unsigned long long)arg2 attributeArray:(TSWPAttributeArray*)arg3 attributeIndex:(unsigned long long)arg4 ;
-(id)pDefaultSectionForContext:(id)arg1 ;
-(BOOL)supportsColumnStyles;
-(TSWPParagraphAttributeArray*)paragraphAttributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 ;
-(NSRange)replaceCharactersInRange:(NSRange)arg1 withStorage:(id)arg2 ;
-(id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1 ;
-(void)compress:(TSWPStorageActionState*)arg1 ;
-(void)validate:(BOOL)arg1 shouldThrow:(BOOL)arg2 ;
-(BOOL)p_shouldAcceptChangesForRange:(NSRange)arg1 removeDeletedText:(BOOL*)arg2 ;
-(void)saveRange:(NSRange)arg1 toArchiver:(id)arg2 styleProvider:(id)arg3 archiveChanges:(BOOL)arg4 removeDeletedText:(BOOL)arg5 ;
-(BOOL)hasTrackedChanges;
-(void)addParagraphObserver:(id)arg1 ;
-(void)removeParagraphObserver:(id)arg1 ;
-(void)nonUndoableFilterInvalidContentForStorage:(id)arg1 ;
-(unsigned)disallowedElementKinds;
-(BOOL)allowsElementKind:(int)arg1 ;
-(unsigned)disallowedSmartFieldKinds;
-(BOOL)supportsSectionCopying;
-(BOOL)supportsPageBreaks;
-(NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 updatingSearchRange:(NSRange*)arg3 ;
-(void)p_nonUndoableFilterSectionBreaksFromStorage:(id)arg1 ;
-(void)p_nonUndoableFilterPageBreaksFromStorage:(id)arg1 ;
-(unsigned long long)footnoteCount;
-(id)footnoteAtFootnoteIndex:(unsigned long long)arg1 outCharIndex:(unsigned long long*)arg2 ;
-(BOOL)allowsSmartFieldKind:(int)arg1 ;
-(void)removeSmartField:(id)arg1 fromRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)highlightsAllowed;
-(void)applyObject:(id)arg1 toCharRange:(NSRange)arg2 forKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorForCharRange:(NSRange)arg1 styleProvider:(id)arg2 ;
-(NSRange)rangeForSelectionWithInsertionSelection:(id)arg1 ;
-(unsigned long long)nextCharacterIndex:(unsigned long long)arg1 ;
-(NSRange)selectionRangeForCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)previousCharacterIndex:(unsigned long long)arg1 forDelete:(BOOL)arg2 ;
-(BOOL)isEmptyParagraphRange:(NSRange)arg1 ignoreAttachmentCharacters:(BOOL)arg2 outRange:(NSRange*)arg3 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorAtCharIndex:(unsigned long long)arg1 styleProvider:(id)arg2 ;
-(void)enumerateAttachmentsInTextRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(BOOL)arg2 ;
-(NSRange)p_rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 handleNextWordWhitespace:(BOOL)arg3 ;
-(NSRange)rangeByExtendingRangeToWhitespace:(NSRange)arg1 skipVisibleDeleted:(BOOL)arg2 ;
-(id)deletedRangesInRange:(NSRange)arg1 ;
-(id)hiddenRangesInRange:(NSRange)arg1 ;
-(id)changeAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(NSRange*)arg3 ;
-(NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 includeHyphenation:(BOOL)arg3 ;
-(NSRange)textRangeForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(void)p_attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(NSRange)p_RelocateNonSelectedAnchorsInRange:(NSRange)arg1 selectionInfos:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(NSRange)insertAttachmentOrFootnote:(id)arg1 range:(NSRange)arg2 placementIndex:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 changeSession:(id)arg6 ;
-(NSRange)p_replaceCharactersInLogicalSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned)arg3 replaceTextData:(id)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 outInsertedRange:(NSRange*)arg7 ;
-(id)relocateNonSelectedAnchorsInSelection:(id)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(id)p_replacementsForSelection:(id)arg1 withString:(id)arg2 changeSession:(id)arg3 shouldTrackDeletions:(BOOL)arg4 ;
-(void)p_replaceCharactersInSelection:(id)arg1 withString:(id)arg2 actionBuilder:(TSWPStorageActionBuilder*)arg3 ;
-(void)setLanguage:(id)arg1 forCharRange:(NSRange)arg2 actionBuilder:(TSWPStorageActionBuilder*)arg3 ;
-(void)setDictationAndAutocorrection:(id)arg1 forCharRange:(NSRange)arg2 actionBuilder:(TSWPStorageActionBuilder*)arg3 ;
-(NSRange)rangeForChange:(id)arg1 ;
-(NSRange)replaceAllOccurrencesOfObject:(id)arg1 withObject:(id)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(NSRange)textRangeForListAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)listEndAtCharIndex:(unsigned long long)arg1 ;
-(TSWPParagraphEnumerator)paragraphEnumeratorAtParIndex:(unsigned long long)arg1 styleProvider:(id)arg2 ;
-(NSRange)paragraphIndexRangeForCharRange:(NSRange)arg1 ;
-(NSRange)p_rangeWithNonVisibleAttachmentsTrimmedForRange:(NSRange)arg1 ;
-(unsigned long long)paragraphLevelAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtParIndex:(unsigned long long)arg1 ;
-(unsigned long long)pFirstParIndexInListAtParIndex:(unsigned long long)arg1 ;
-(int)p_writingDirectionFromBidiAttributesTableForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(void)applyWritingDirection:(int)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)bestCharacterLanguageForTextRange:(NSRange)arg1 ;
-(id)languageForTextRange:(NSRange)arg1 useStringTokenizer:(BOOL)arg2 useDocumentLanguage:(BOOL)arg3 ;
-(void)applyObject:(id)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)applyObject:(id)arg1 toParagraphsInCharRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned long long)listNumberForParagraphEnumerator:(const TSWPParagraphEnumerator*)arg1 numberingData:(SCD_Struct_TS702*)arg2 ;
-(BOOL)hasPartitionedAttachmentAtStartOfTextRange:(NSRange)arg1 ;
-(void)applyDataValue:(unsigned)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphsInCharRange:(NSRange)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)characterStyleAtCharIndex:(unsigned long long)arg1 left:(BOOL)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)columnStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)hasSectionForParagraphBreakAtCharIndex:(unsigned long long)arg1 ;
-(id)columnStyleAtColumnStyleIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)didChangeRange:(NSRange)arg1 delta:(long long)arg2 broadcastKind:(int)arg3 attributeKindChanges:(id)arg4 ;
-(void)didChangeParagraphsInIndexRange:(NSRange)arg1 ;
-(void)styleDidChangeInRange:(NSRange)arg1 ;
-(id)sectionAtSectionIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(NSRange)insertSpecialCharacter:(unsigned short)arg1 object:(id)arg2 kind:(int)arg3 range:(NSRange)arg4 dolcContext:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 changeSession:(id)arg7 ;
-(unsigned long long)sectionIndexForCharIndex:(unsigned long long)arg1 ;
-(NSRange)footnoteRangeForTextRange:(NSRange)arg1 ;
-(unsigned long long)footnoteIndexForFootnote:(id)arg1 ;
-(NSRange)insertSpecialCharacter:(unsigned short)arg1 object:(id)arg2 kind:(int)arg3 range:(NSRange)arg4 placementIndex:(int)arg5 dolcContext:(id)arg6 undoTransaction:(TSWPStorageTransaction*)arg7 changeSession:(id)arg8 ;
-(NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(BOOL)arg2 attributeKind:(int)arg3 ;
-(BOOL)anchoredDrawableAttachmentCharacterAtCharIndex:(unsigned long long)arg1 ;
-(id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(int)arg2 effectiveRange:(NSRange*)arg3 ;
-(NSRange)p_extendRangeToIncludeSmartFields:(NSRange)arg1 ;
-(NSRange)textRangeForParagraphsInCharRange:(NSRange)arg1 ;
-(BOOL)hasSmartFieldsInRange:(NSRange)arg1 ;
-(void)enumerateWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 withOptions:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateSmartFieldsWithAttributeKind:(int)arg1 inRange:(NSRange)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)smartFieldsWithAttributeKind:(int)arg1 intersectingRange:(NSRange)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)placeholderSmartFieldsIntersectingRange:(NSRange)arg1 ;
-(CTFontRef)createFontAtCharIndex:(unsigned long long)arg1 scaleTextPercent:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 styleProvider:(id)arg4 ;
-(id)newSubstorageWithRange:(NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned)arg4 kind:(int)arg5 ;
-(void)p_mutateByWordWithUndoTransaction:(TSWPStorageTransaction*)arg1 locale:(id)arg2 transformer:(/*^block*/id)arg3 ;
-(BOOL)p_hasGoodAttributesForPlainTextPaste;
-(id)newSubstorageWithRange:(NSRange)arg1 storageContext:(id)arg2 objectsContext:(id)arg3 flags:(unsigned)arg4 ;
-(id)sectionAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)paragraphFlags:(unsigned short*)arg1 andLevel:(unsigned long long*)arg2 atCharIndex:(unsigned long long)arg3 ;
-(void)setParagraphFlags:(unsigned short)arg1 level:(unsigned long long)arg2 forCharRange:(NSRange)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(void)nonUndoableInitializeAttributeArraySource:(TSWPAttributeArray*)arg1 forSourceRange:(NSRange)arg2 toDestStorage:(id)arg3 objectContext:(id)arg4 dolcContext:(id)arg5 flags:(int)arg6 ;
-(int)compareAttributeArray:(TSWPAttributeArray*)arg1 range:(NSRange)arg2 otherStorage:(id)arg3 otherRange:(NSRange)arg4 styleComparisonBlock:(/*^block*/id)arg5 ;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 actionState:(TSWPStorageActionState*)arg3 ;
-(BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1 ;
-(void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL)arg2 attributesTable:(id)arg3 effectiveRange:(NSRange*)arg4 ;
-(id)footnoteReferenceAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1 ;
-(long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(NSRange)arg2 locale:(CFLocaleRef)arg3 hyphenChar:(unsigned*)arg4 ;
-(id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 effectiveRange:(NSRange*)arg3 ;
-(unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1 ;
-(NSRange)charRangeRemappedFromStorage:(NSRange)arg1 ;
-(BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2 ;
-(void)updateStorageChangeCount;
-(unsigned long long)storageLength;
-(void)unarchiverAppendParagraphBreak:(unsigned short)arg1 ;
-(void)addDisallowedElementKind:(int)arg1 ;
-(void)removeDisallowedElementKind:(int)arg1 ;
-(BOOL)canAcceptDrawableAttachments;
-(void)addDisallowedSmartFieldKind:(int)arg1 ;
-(void)removeDisallowedSmartFieldKind:(int)arg1 ;
-(id)textSourceForLayoutInRange:(NSRange)arg1 ;
-(BOOL)isDOLCSuppressed;
-(BOOL)setDOLCSuppressed:(BOOL)arg1 ;
-(id)stringForStatisticsInRange:(NSRange)arg1 ;
-(id)highlightSelectionForSelection:(id)arg1 ;
-(unsigned long long)previousCharacterIndex:(unsigned long long)arg1 ;
-(BOOL)isEmptyParagraphSelection:(id)arg1 ignoreAttachmentCharacters:(BOOL)arg2 outRange:(NSRange*)arg3 ;
-(BOOL)isAllWhitespaceInRange:(NSRange)arg1 ;
-(NSRange)rangeByExtendingRangeToWhitespace:(NSRange)arg1 ;
-(NSRange)rangeByExtendingRangeToLineBreak:(NSRange)arg1 ;
-(NSRange)scanLeftForWordAtCharIndex:(unsigned long long)arg1 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 ;
-(NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2 ;
-(NSRange)rangeByExpandingToIncludePartialWords:(NSRange)arg1 ;
-(NSRange)rangeByTrimmingRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)objectAtLocationAtExactCharIndex:(unsigned long long)arg1 forAttributeKind:(int)arg2 ;
-(id)extendSelectionForTopicChildren:(id)arg1 ;
-(NSRange)appendString:(id)arg1 undoTransaction:(TSWPStorageTransaction*)arg2 ;
-(NSRange)replaceCharactersInSelection:(id)arg1 withString:(id)arg2 withFlags:(unsigned)arg3 replaceTextData:(id)arg4 changeSession:(id)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 outInsertedRange:(NSRange*)arg7 ;
-(NSRange)moveCharactersInRange:(NSRange)arg1 toLocation:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(id)substringWithSelection:(id)arg1 ;
-(void)insertPlaceholderText:(id)arg1 atCharIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(NSRange)rangeOfString:(id)arg1 searchOptions:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfParagraphBreakingCharacter:(unsigned short)arg1 backwards:(BOOL)arg2 range:(NSRange)arg3 ;
-(NSRange)rangeOfAnnotationWithOptions:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(NSRange)rangeForHighlight:(id)arg1 ;
-(NSRange)rangeForAnnotation:(id)arg1 ;
-(NSRange)replaceAllOccurrencesOfStyle:(id)arg1 withStyle:(id)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(BOOL)styleOverridesAppliedToRange:(NSRange)arg1 ;
-(NSRange)textRangeForListsInCharRange:(NSRange)arg1 ;
-(NSRange)textRangeForParagraphIndexRange:(NSRange)arg1 ;
-(unsigned long long)paragraphStartAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)paragraphEndAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedParagraphBreakCount:(NSRange)arg1 ;
-(unsigned long long)emptyParagraphCount:(NSRange)arg1 ;
-(BOOL)isWholeParagraphsForRange:(NSRange)arg1 ignoreAttachmentCharacters:(BOOL)arg2 requireParagraphBreakSelected:(BOOL)arg3 ;
-(BOOL)paragraphHasListLabelAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)isWritingDirectionRightToLeftForListAtParIndex:(unsigned long long)arg1 ;
-(id)languageAtParIndex:(unsigned long long)arg1 useStringTokenizer:(BOOL)arg2 useDocumentLanguage:(BOOL)arg3 ;
-(id)dictationAndAutocorrectionKeyAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)addAllDictationAndAutocorrectionKeyRangesInRange:(NSRange)arg1 toRanges:(TSWPRangeVector*)arg2 ;
-(void)setDictationAndAutocorrection:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setParagraphStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(unsigned long long)findNextParagraphStyleChange:(unsigned long long)arg1 maxCharIndex:(unsigned long long)arg2 ;
-(void)nonUndoableFilterParagraphStylesForHeaderFooter;
-(void)enumerateParagraphsIntersectingTextRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)supportsListStyles;
-(unsigned long long)listStyleCount;
-(void)setListStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setListStyle:(id)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(unsigned long long)listNumberForParagraphIndex:(unsigned long long)arg1 numberingData:(SCD_Struct_TS702*)arg2 ;
-(void)setListStart:(unsigned long long)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setParagraphFlags:(unsigned short)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setParagraphLevel:(unsigned long long)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)setParagraphLevel:(unsigned long long)arg1 atParIndex:(unsigned long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)applyChangeSet:(id)arg1 tableKind:(int)arg2 range:(NSRange)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(id)valueForProperty:(int)arg1 atCharIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(BOOL)supportsMultipleColumns;
-(unsigned long long)columnStyleCount;
-(void)setColumnStyle:(id)arg1 forCharRange:(NSRange)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 ;
-(void)invalidateForStyle:(id)arg1 ;
-(void)replaceSectionAtSectionIndex:(unsigned long long)arg1 withSection:(id)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(unsigned long long)sectionIndexForSection:(id)arg1 ;
-(NSRange)insertSection:(id)arg1 atCharIndex:(unsigned long long)arg2 dolcContext:(id)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 changeSession:(id)arg5 ;
-(void)nonUndoableAppendSection:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(unsigned long long)footnoteIndexForCharIndex:(unsigned long long)arg1 ;
-(id)footnoteReferenceAttachmentOrFootnoteMarkAttachmentAtCharIndex:(unsigned long long)arg1 ;
-(id)footnoteMarkAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)autoNumberFootnoteCountForRange:(NSRange)arg1 ;
-(unsigned long long)footnoteIndexForFootnoteStorage:(id)arg1 ;
-(id)footnoteStorages;
-(unsigned long long)findCharIndexForFootnoteAttachment:(id)arg1 ;
-(void)invalidateFootnoteAttachmentCharIndexes;
-(void)invalidatePageCountAttachmentCharIndexes:(BOOL)arg1 ;
-(void)invalidateCharIndexForAttachment:(id)arg1 ;
-(unsigned long long)findCharacterIndexForContainedInfo:(id)arg1 ;
-(unsigned long long)attachmentIndexAtCharIndex:(unsigned long long)arg1 ;
-(void)nonUndoableReplaceWithAttachment:(id)arg1 forAttachmentIndex:(unsigned long long)arg2 dolcContext:(id)arg3 ;
-(unsigned long long)attachmentIndexForInsertionAtCharIndex:(unsigned long long)arg1 ;
-(void)enumerateFootnoteAttachmentsInTextRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)findCharIndexForAttachment:(id)arg1 ;
-(NSRange)attachmentRangeForCharIndex:(unsigned long long)arg1 forwards:(BOOL)arg2 ;
-(unsigned long long)charIndexBeforeAnyAnchoredAttachmentsAtCharIndex:(unsigned long long)arg1 ;
-(id)extendSelectionToIncludeSmartFields:(id)arg1 ;
-(id)editableSmartFieldAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(BOOL)hasSmartFields;
-(void)resetAllTextAttributeUUIDStrings;
-(id)placeholderSmartFieldAtRange:(NSRange)arg1 ;
-(void)smartFieldDidChange:(id)arg1 ;
-(void)autoUpdateField:(id)arg1 withRange:(NSRange)arg2 documentRoot:(id)arg3 returningInsertedRange:(NSRange*)arg4 ;
-(void)autoUpdateSmartFieldsWithDocumentRoot:(id)arg1 ;
-(BOOL)phoneticsExistOnRange:(NSRange)arg1 ;
-(id)snapshotRubyStateInRange:(NSRange)arg1 ;
-(void)addGlyphVariantData:(id)arg1 toRange:(NSRange)arg2 ;
-(void)removeGlyphVariantDataFromRange:(NSRange)arg1 ;
-(id)glyphVariantDataAtCharIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)fixGlyphVariantFontsForRange:(NSRange)arg1 ;
-(id)fontNameAtCharIndex:(unsigned long long)arg1 size:(double*)arg2 effectiveRange:(NSRange*)arg3 styleProvider:(id)arg4 ;
-(Class)layoutClassForInstructionalText;
-(void)didChangeRange:(NSRange)arg1 delta:(long long)arg2 broadcastKind:(int)arg3 ;
-(void)didChangeParagraphAttributeLocation:(unsigned long long)arg1 delta:(long long)arg2 ;
-(BOOL)hasVisibleText;
-(BOOL)canPasteAsPlainText;
-(BOOL)canPasteAsPlainTextWithUniformParagraphs;
-(unsigned long long)selectionRangeMinForCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectionRangeMaxForCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)moveByLineRange:(NSRange)arg1 up:(BOOL)arg2 ;
-(CFStringTokenizerRef)createTokenizerForCharIndex:(unsigned long long)arg1 outTokenizerRange:(out NSRange*)arg2 ;
-(int)compareRange:(NSRange)arg1 otherStorage:(id)arg2 otherRange:(NSRange)arg3 options:(unsigned long long)arg4 ;
-(BOOL)ignoreContentsChangedNotifications;
-(void)setIgnoreContentsChangedNotifications:(BOOL)arg1 ;
-(void)splitSmartFieldAtCharIndex:(unsigned long long)arg1 lengthToInsert:(unsigned long long)arg2 attributeKind:(int)arg3 dolcContext:(id)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 options:(unsigned long long)arg3 changedRange:(NSRange*)arg4 changeDelta:(long long*)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 changeSession:(id)arg7 ;
-(id)valueForBIUProperties:(id)arg1 selection:(id)arg2 insertionStyle:(id)arg3 ;
-(BOOL)p_passesExtraTablesChecksForStoringInAStringValueCell;
-(id)valueForBIUProperties:(id)arg1 ;
-(long long)pFlipSpecialCharacterForObject:(id)arg1 range:(NSRange)arg2 insertLength:(unsigned long long)arg3 outChangeRange:(NSRange*)arg4 attributeArrayKind:(int)arg5 actionState:(TSWPStorageActionState*)arg6 ;
-(void)p_replaceRange:(NSRange)arg1 withString:(id)arg2 markers:(TSWPMarkers*)arg3 flags:(unsigned)arg4 actionState:(TSWPStorageActionState*)arg5 ;
-(BOOL)hasHiddenTextAtCharIndex:(unsigned long long)arg1 ;
-(BOOL)isObjectValid:(id)arg1 forStyleKind:(int)arg2 ;
-(void)applyObject:(id)arg1 toCharRange:(NSRange)arg2 forKind:(int)arg3 actionBuilder:(TSWPStorageActionBuilder*)arg4 ;
-(void)applyParagraphData:(TSWPParagraphData)arg1 toParagraphIndexRange:(NSRange)arg2 forKind:(int)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(int)compareAttributeArray1:(TSWPAttributeArray*)arg1 array2:(TSWPAttributeArray*)arg2 range1:(NSRange)arg3 range2:(NSRange)arg4 attributeIndex1:(unsigned long long)arg5 attributeIndex2:(unsigned long long)arg6 styleComparisonBlock:(/*^block*/id)arg7 ;
-(id)pOverrideObjectBeforeReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 withInsertionBehavior:(int)arg3 ;
-(id)pFindValidInsertionCharStyleFromCharIndex:(unsigned long long)arg1 ;
-(void)applyFlags:(unsigned short)arg1 level:(unsigned long long)arg2 toParagraphIndexRange:(NSRange)arg3 forKind:(int)arg4 undoTransaction:(TSWPStorageTransaction*)arg5 ;
-(id)pOverrideObjectBeforeReplacingCharactersInSelection:(id)arg1 withString:(id)arg2 ;
-(id)defaultSectionForContext:(id)arg1 ;
-(id)pFlipStringForObject:(id)arg1 insertLength:(unsigned long long)arg2 attributeArrayKind:(int)arg3 ;
-(TSWPChangeAttributeArray*)deletionChangesTable;
-(NSRange)textRangeIgnoringTrailingLineBreaksForParagraphAtIndex:(unsigned long long)arg1 ;
-(id)stringEquivalentFromRange:(NSRange)arg1 withLayoutParent:(id)arg2 ;
-(BOOL)hasDeletionInRange:(NSRange)arg1 ;
-(id)plainTextStringFromRange:(NSRange)arg1 convertTextualAttachments:(BOOL)arg2 includeChildTextStorages:(BOOL)arg3 forExport:(BOOL)arg4 withLayoutParent:(id)arg5 ;
-(id)stringEquivalentFromRange:(NSRange)arg1 ;
-(id)changeAtCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(id)changeDetailsForChange:(id)arg1 withRange:(NSRange)arg2 ;
-(TSWPChangeAttributeArray*)insertionChangesTable;
-(TSWPRangeVector*)deletedRangeVectorInRange:(NSRange)arg1 ;
-(BOOL)p_hasDeletedTextAtCharIndex:(unsigned long long)arg1 requireHidden:(BOOL)arg2 range:(NSRange*)arg3 ;
-(unsigned long long)p_indexOfFirstNonDeletedCharInRange:(NSRange)arg1 requireVisible:(BOOL)arg2 ;
-(id)p_undeletedCharIndexesInRange:(NSRange)arg1 ;
-(void)applyChange:(id)arg1 changeRange:(NSRange)arg2 accept:(BOOL)arg3 undoTransaction:(TSWPStorageTransaction*)arg4 ;
-(NSRange)rangeForTrackedChanges:(id)arg1 ;
-(id)firstHighlightForSelectionRange:(NSRange)arg1 outRange:(NSRange*)arg2 requireComment:(BOOL)arg3 ;
-(BOOL)selectionContainsVisibleTrackedChanges:(id)arg1 ;
-(id)changeDetailsAtCharIndex:(unsigned long long)arg1 outRange:(NSRange*)arg2 ;
-(BOOL)p_shouldInsertionSplitChange:(id)arg1 changeSession:(id)arg2 ;
-(id)visibleRangesInRange:(NSRange)arg1 ;
-(BOOL)hasHiddenTextAtCharIndex:(unsigned long long)arg1 range:(NSRange*)arg2 ;
-(BOOL)hasDeletedTextAtCharIndex:(unsigned long long)arg1 range:(NSRange*)arg2 ;
-(BOOL)hasVisibleTextAtCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstVisibleCharInRange:(NSRange)arg1 ;
-(unsigned long long)indexOfFirstNonDeletedCharInRange:(NSRange)arg1 ;
-(unsigned long long)indexAfterLastVisibleCharInRange:(NSRange)arg1 ;
-(BOOL)isCharRangePartiallyDeleted:(NSRange)arg1 ;
-(BOOL)isCharRangeEntirelyDeleted:(NSRange)arg1 ;
-(void)applyChanges:(BOOL)arg1 inRange:(NSRange)arg2 inSelectionRange:(NSRange)arg3 outChangedRange:(NSRange*)arg4 outSelectionRange:(NSRange*)arg5 undoTransaction:(TSWPStorageTransaction*)arg6 forceAll:(BOOL)arg7 kind:(int)arg8 ;
-(id)nextChangeFromCharIndex:(unsigned long long)arg1 afterChange:(id)arg2 changeRange:(NSRange*)arg3 ;
-(id)previousChangeFromCharIndex:(unsigned long long)arg1 beforeChange:(id)arg2 changeRange:(NSRange*)arg3 ;
-(unsigned long long)countTrackChangesInSelection:(id)arg1 ;
-(void)settingsDidChangeRequiringLayoutAndRendering;
-(id)characterStyleForDeletedRange:(NSRange)arg1 ;
-(id)editableAnnotationForInsertionPointSelection:(id)arg1 includeComments:(BOOL)arg2 withOutRange:(NSRange*)arg3 selectionIsOnEdge:(BOOL*)arg4 ;
-(void)p_updateChangeTimestampForDeletedRange:(NSRange)arg1 actionBuilder:(TSWPStorageActionBuilderRef)arg2 ;
-(void)p_handleChangeSplittingForInsertedRange:(NSRange)arg1 changeSession:(id)arg2 actionBuilder:(TSWPStorageActionBuilderRef)arg3 ;
-(NSRange)replaceCharactersInSelection:(id)arg1 withStorage:(id)arg2 usePasteRules:(BOOL)arg3 srcStylesAmbiguous:(BOOL)arg4 dolcContext:(id)arg5 changeSession:(id)arg6 undoTransaction:(TSWPStorageTransaction*)arg7 ;
-(void)transferAttributeArraySource:(TSWPAttributeArray*)arg1 toAttributeArrayDest:(TSWPAttributeArray*)arg2 atCharIndex:(unsigned long long)arg3 delta:(long long)arg4 dolcContext:(id)arg5 actionBuilder:(TSWPStorageActionBuilder*)arg6 ;
-(TSWPAttributeArray*)attributeArrayForKind:(int)arg1 withCreate:(BOOL)arg2 fromUndo:(BOOL)arg3 actionState:(TSWPStorageActionState*)arg4 ;
-(void)compressAttributeArrayKind:(int)arg1 actionState:(TSWPStorageActionState*)arg2 ;
-(TPSectionEnumerator)sectionEnumeratorAtCharIndex:(unsigned long long)arg1 ;
-(TPSectionEnumerator)sectionEnumeratorForCharRange:(NSRange)arg1 ;
-(TPSectionEnumerator)sectionEnumeratorAtSectionIndex:(unsigned long long)arg1 ;
-(id)firstPageNumberAttachment;
-(id)firstPageCountAttachment;
-(NSRange)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)length;
-(void)addObserver:(id)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(unsigned long long)changeCount;
-(void)removeObserver:(id)arg1 ;
-(id)string;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)stringValue;
-(NSRange)range;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(BOOL)isSelectable;
-(BOOL)hasComments;
-(unsigned long long)sectionCount;
-(unsigned long long)wordCount;
-(BOOL)supportsSections;
-(id)childEnumerator;
-(Class)layoutClass;
-(void)acceptVisitor:(id)arg1 ;
-(unsigned long long)paragraphCount;
-(TSSStylesheet *)stylesheet;
-(void)setStylesheet:(TSSStylesheet *)arg1 ;
-(unsigned long long)characterCount;
-(id)documentRoot;
-(void)setDocumentRoot:(id)arg1 ;
@end
