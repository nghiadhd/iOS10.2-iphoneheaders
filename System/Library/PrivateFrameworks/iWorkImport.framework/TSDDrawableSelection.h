/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKSelection.h>

@class NSSet;

@interface TSDDrawableSelection : TSKSelection {

	NSSet* mInfos;

}

@property (nonatomic,retain,readonly) NSSet * infos; 
@property (nonatomic,readonly) unsigned long long infoCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) NSSet * unlockedInfos; 
@property (nonatomic,readonly) unsigned long long unlockedInfoCount; 
+(Class)archivedSelectionClass;
-(void)saveToArchive:(DrawableSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const DrawableSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)infosOfClass:(Class)arg1 ;
-(id)initWithInfos:(id)arg1 ;
-(NSSet *)unlockedInfos;
-(unsigned long long)infoCount;
-(BOOL)containsKindOfClass:(Class)arg1 ;
-(unsigned long long)unlockedInfoCount;
-(BOOL)containsUnlockedKindOfClass:(Class)arg1 ;
-(id)UUIDDescription;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSSet *)infos;
@end

