/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPAlternateArchiverKey : NSObject <NSCopying> {

	unsigned long long _version;
	const FieldPath* _fieldPath;

}

@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) const FieldPath* fieldPath;              //@synthesize fieldPath=_fieldPath - In the implementation block
-(id)initWithVersion:(unsigned long long)arg1 fieldPath:(const FieldPath*)arg2 ;
-(const FieldPath*)fieldPath;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)version;
@end

