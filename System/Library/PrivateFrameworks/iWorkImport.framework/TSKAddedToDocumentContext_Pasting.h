/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKAddedToDocumentContext.h>

@protocol TSKMultiTableRemapping;
@class NSMutableArray;

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext {

	NSMutableArray* mAddedDrawables;
	id<TSKMultiTableRemapping> mMultiTableRemapper;

}
-(BOOL)autoUpdateSmartFields;
-(void)addDrawables:(id)arg1 ;
-(id)addedDrawables;
-(BOOL)wasPasted;
-(BOOL)uniqueBookmarks;
-(BOOL)syncChanges;
-(id)multiTableRemapper;
-(void)setMultiTableRemapper:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)addDrawable:(id)arg1 ;
@end

