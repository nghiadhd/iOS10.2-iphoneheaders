/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMLogItem : NSObject <NSSecureCoding, NSCopying> {

	id _internalLogItem;

}

@property (nonatomic,readonly) double timestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTimestamp:(double)arg1 ;
@end

