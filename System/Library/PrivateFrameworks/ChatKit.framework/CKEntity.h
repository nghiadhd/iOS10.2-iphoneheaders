/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, IMHandle, CNContact, NSString;

@interface CKEntity : NSObject {

	UIImage* _transcriptContactImage;
	UIImage* _transcriptDrawerContactImage;
	IMHandle* _handle;
	CNContact* _cnContact;

}

@property (nonatomic,retain) IMHandle * handle;                                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) CNContact * cnContact;                                     //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) IMHandle * defaultIMHandle; 
@property (nonatomic,readonly) void* abRecord; 
@property (nonatomic,readonly) int propertyType; 
@property (nonatomic,readonly) int identifier; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * abbreviatedDisplayName; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * rawAddress; 
@property (nonatomic,copy,readonly) NSString * originalAddress; 
@property (nonatomic,copy,readonly) NSString * IDSCanonicalAddress; 
@property (nonatomic,copy,readonly) NSString * textToneIdentifier; 
@property (nonatomic,copy,readonly) NSString * textVibrationIdentifier; 
@property (nonatomic,readonly) UIImage * transcriptContactImage;                        //@synthesize transcriptContactImage=_transcriptContactImage - In the implementation block
@property (nonatomic,readonly) UIImage * transcriptDrawerContactImage;                  //@synthesize transcriptDrawerContactImage=_transcriptDrawerContactImage - In the implementation block
@property (nonatomic,readonly) UIImage * locationMapViewContactImage; 
@property (nonatomic,readonly) UIImage * locationShareBalloonContactImage; 
+(id)copyEntityForAddressString:(id)arg1 ;
+(id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(int)identifier;
-(BOOL)isMe;
-(void)setHandle:(IMHandle *)arg1 ;
-(IMHandle *)handle;
-(id)initWithIMHandle:(id)arg1 ;
-(UIImage *)locationShareBalloonContactImage;
-(IMHandle *)defaultIMHandle;
-(NSString *)IDSCanonicalAddress;
-(NSString *)rawAddress;
-(int)propertyType;
-(void*)abRecord;
-(id)personViewControllerWithDelegate:(id)arg1 ;
-(CNContact *)cnContact;
-(void)setCnContact:(CNContact *)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(NSString *)abbreviatedDisplayName;
-(NSString *)originalAddress;
-(NSString *)textToneIdentifier;
-(NSString *)textVibrationIdentifier;
-(UIImage *)locationMapViewContactImage;
-(UIImage *)transcriptContactImage;
-(UIImage *)transcriptDrawerContactImage;
-(NSString *)fullName;
@end

