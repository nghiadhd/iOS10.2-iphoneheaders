/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface TSUCFSetEnumerator : NSObject <NSFastEnumeration> {

	void** mInlineObjects[16];
	const void* mObjects;
	long long mCount;
	long long mIndex;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS23*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)allObjects;
-(id)nextObject;
-(id)initWithCFSet:(CFSetRef)arg1 ;
@end

