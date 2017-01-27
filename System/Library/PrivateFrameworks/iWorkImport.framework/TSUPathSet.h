/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableDictionary;

@interface TSUPathSet : NSObject <NSCopying> {

	NSMutableSet* mPaths;
	NSMutableDictionary* mBasePathToNumberMap;
	TSUPathSet* mUnderlyingSet;

}
+(void)processPath:(id)arg1 base:(id*)arg2 hasBaseNumber:(BOOL*)arg3 baseNumber:(unsigned*)arg4 extension:(id*)arg5 ;
+(id)parseNumberOutOfBasename:(id)arg1 hasNumber:(BOOL*)arg2 number:(unsigned*)arg3 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)addPath:(id)arg1 ;
-(id)initWithPaths:(id)arg1 basePathToNumberMap:(id)arg2 ;
-(void)setUnderlyingPathSet:(id)arg1 ;
-(BOOL)isPathUsed:(id)arg1 ;
-(void)pathIsUsed:(id)arg1 ;
-(void)pathIsNoLongerUsed:(id)arg1 ;
-(void)unionPathSet:(id)arg1 ;
@end

