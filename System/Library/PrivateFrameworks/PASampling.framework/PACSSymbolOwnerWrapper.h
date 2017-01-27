/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PACSRefWrapper.h>

@class NSString;

@interface PACSSymbolOwnerWrapper : PACSRefWrapper {

	NSString* _path;
	BOOL _usedDsymForUUID;

}

@property (__weak,readonly) NSString * path; 
@property (assign) BOOL usedDsymForUUID;                  //@synthesize usedDsymForUUID=_usedDsymForUUID - In the implementation block
-(id)debugDescription;
-(NSString *)path;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 ;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(BOOL)usedDsymForUUID;
-(void)setUsedDsymForUUID:(BOOL)arg1 ;
@end

