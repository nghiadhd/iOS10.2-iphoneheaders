/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding> {

	unsigned _hidEventType;

}

@property (readonly) unsigned hidEventType;              //@synthesize hidEventType=_hidEventType - In the implementation block
+(id)descriptorWithEventType:(unsigned)arg1 ;
+(id)reusableDescriptorWithEventType:(unsigned)arg1 ;
+(id)reusableVendorDefinedDescriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
+(id)reusableKeyboardDescriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)describes:(id)arg1 ;
-(unsigned)hidEventType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithEventType:(unsigned)arg1 ;
@end

