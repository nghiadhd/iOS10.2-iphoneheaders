/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDHint.h>

@class NSString;

@interface TSDDefaultHint : NSObject <TSDHint> {

	CGRect mBounds;
	unsigned long long mEdges;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long edges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)archivedHintClass;
-(id)initWithBounds:(CGRect)arg1 edges:(unsigned long long)arg2 ;
-(BOOL)isLastPartitionHorizontally:(BOOL)arg1 ;
-(BOOL)overlapsWithSelectionPath:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(CGRect)bounds;
-(unsigned long long)edges;
@end

