/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface SKUIMediaSocialProfile : NSObject <NSCopying> {

	NSURL* _backgroundImageURL;
	NSString* _bio;
	NSString* _handle;
	NSString* _identifier;
	NSString* _name;
	NSString* _profileType;
	NSURL* _profileImageURL;

}

@property (nonatomic,copy) NSURL * backgroundImageURL;              //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (nonatomic,copy) NSString * bio;                          //@synthesize bio=_bio - In the implementation block
@property (nonatomic,copy) NSString * handle;                       //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * profileImageURL;                 //@synthesize profileImageURL=_profileImageURL - In the implementation block
@property (nonatomic,copy) NSString * profileType;                  //@synthesize profileType=_profileType - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)profileType;
-(NSURL *)profileImageURL;
-(void)setBackgroundImageURL:(NSURL *)arg1 ;
-(void)setBio:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(void)setProfileImageURL:(NSURL *)arg1 ;
-(void)setProfileType:(NSString *)arg1 ;
-(id)initWithProfileDictionary:(id)arg1 ;
-(NSURL *)backgroundImageURL;
-(NSString *)bio;
-(NSString *)handle;
@end

