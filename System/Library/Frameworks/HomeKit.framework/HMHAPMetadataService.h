/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HMHAPMetadataService : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _svcDescription;
	NSString* _localizedDescription;
	NSString* _type;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * svcDescription;                    //@synthesize svcDescription=_svcDescription - In the implementation block
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * type;                              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setSvcDescription:(NSString *)arg1 ;
-(NSString *)svcDescription;
@end

