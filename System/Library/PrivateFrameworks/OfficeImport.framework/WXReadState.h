/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class WDDocument, OITSUNoCopyDictionary, OCPPackagePart, NSMutableArray, WXOAVReadState, OAXDrawingState, WDCharacterRun, CXNamespace;

@interface WXReadState : OCXReadState {

	WDDocument* mDocument;
	OITSUNoCopyDictionary* mTextNodesToBeAdded;
	OITSUNoCopyDictionary* mMapBookmarkIdToName;
	OITSUNoCopyDictionary* mMapAnnotationIdToAnnotation;
	OITSUNoCopyDictionary* mMapTextBoxIdToDrawableId;
	OITSUNoCopyDictionary* mMapDrawableIdToTextBox;
	OCPPackagePart* mPackagePart;
	OCPPackagePart* mAnnotationPart;
	xmlDoc* mFootnoteDocument;
	xmlNode* mFootnotes;
	xmlDoc* mEndnoteDocument;
	xmlNode* mEndnotes;
	xmlDoc* mAnnotationDocument;
	xmlNode* mAnnotations;
	NSMutableArray* mDeleteAuthorStack;
	NSMutableArray* mDeleteDateStack;
	NSMutableArray* mEditAuthorStack;
	NSMutableArray* mEditDateStack;
	NSMutableArray* mFormatAuthorStack;
	NSMutableArray* mFormatDateStack;
	NSMutableArray* mPendingCommentNodes;
	WXOAVReadState* mWXOavState;
	OAXDrawingState* mDrawingState;
	int mCurrentOfficeArtTextType;
	WDCharacterRun* mReadSymbolTo;
	BOOL mNewSectionRequested;
	unsigned long long mCurrentRowCNFStyle;
	unsigned long long mCurrentCellCNFStyle;
	BOOL mCurrentTableWraps;
	id<TCCancelDelegate> mCancelDelegate;
	CXNamespace* mWXMainNamespace;
	CXNamespace* mWXDrawingNamespace;
	CXNamespace* mWXShapeNamespace;
	CXNamespace* mWXGroupNamespace;
	CXNamespace* mWXMathNamespace;
	CXNamespace* mWXOOBibliographyNamespace;
	CXNamespace* mWXRelationshipNamespace;
	BOOL mIsThumbnail;

}

@property (assign,nonatomic) int currentOfficeArtTextType; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,retain) CXNamespace * WXMainNamespace; 
@property (nonatomic,retain) CXNamespace * WXDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * WXShapeNamespace; 
@property (nonatomic,retain) CXNamespace * WXGroupNamespace; 
@property (nonatomic,retain) CXNamespace * WXMathNamespace; 
@property (nonatomic,retain) CXNamespace * WXOOBibliographyNamespace; 
@property (nonatomic,retain) CXNamespace * WXRelationshipNamespace; 
-(id)init;
-(void)dealloc;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(id)drawingState;
-(BOOL)hasAnnotations;
-(id)annotationWithID:(long long)arg1 ;
-(xmlNode*)xmlAnnotationWithID:(long long)arg1 ;
-(void)addAnnotationID:(long long)arg1 annotation:(id)arg2 ;
-(id)annotationPart;
-(id)initNoStacksWith:(id)arg1 ;
-(void)addBookmarkId:(long long)arg1 name:(id)arg2 ;
-(id)bookmarkName:(long long)arg1 ;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(void)setDocumentPart:(id)arg1 ;
-(xmlNode*)xmlFootnoteWithID:(long long)arg1 ;
-(xmlNode*)xmlEndnoteWithID:(long long)arg1 ;
-(void)setCurrentOfficeArtTextType:(int)arg1 ;
-(CXNamespace *)WXShapeNamespace;
-(CXNamespace *)WXGroupNamespace;
-(CXNamespace *)WXDrawingNamespace;
-(void)addTextBoxID:(long long)arg1 drawableId:(long long)arg2 textBox:(id)arg3 ;
-(id)textBoxWithTextBoxID:(long long)arg1 ;
-(id)textBoxWithDrawableID:(long long)arg1 ;
-(CXNamespace *)WXMathNamespace;
-(id)readSymbolTo;
-(void)setReadSymbolTo:(id)arg1 ;
-(void)pushEditAuthor:(id)arg1 date:(id)arg2 ;
-(void)popEditAuthorDate;
-(void)pushDeleteAuthor:(id)arg1 date:(id)arg2 ;
-(void)popDeleteAuthorDate;
-(id)nodesToBeAdded:(id)arg1 ;
-(void)clearOutNodesToBeAdded:(id)arg1 ;
-(id)wxoavState;
-(BOOL)currentTableWraps;
-(void)setCurrentCellCNFStyle:(unsigned long long)arg1 ;
-(void)setCurrentTableWraps:(BOOL)arg1 ;
-(unsigned long long)currentCellCNFStyle;
-(unsigned long long)currentRowCNFStyle;
-(void)setCurrentRowCNFStyle:(unsigned long long)arg1 ;
-(void)addPendingComment:(xmlNode*)arg1 ;
-(void)addText:(id)arg1 node:(xmlNode*)arg2 ;
-(id)pendingComments;
-(void)clearPendingComments;
-(CXNamespace *)WXMainNamespace;
-(int)currentOfficeArtTextType;
-(BOOL)isNewSectionRequested;
-(void)setNewSectionRequested:(BOOL)arg1 ;
-(CXNamespace *)WXOOBibliographyNamespace;
-(void)setWXMainNamespace:(CXNamespace *)arg1 ;
-(void)setWXDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setWXShapeNamespace:(CXNamespace *)arg1 ;
-(void)setWXGroupNamespace:(CXNamespace *)arg1 ;
-(void)setWXMathNamespace:(CXNamespace *)arg1 ;
-(void)setWXOOBibliographyNamespace:(CXNamespace *)arg1 ;
-(void)setWXRelationshipNamespace:(CXNamespace *)arg1 ;
-(void)setAnnotationPart:(id)arg1 ;
-(void)pushFormatAuthor:(id)arg1 date:(id)arg2 ;
-(void)popFormatAuthorDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(CXNamespace *)WXRelationshipNamespace;
@end

