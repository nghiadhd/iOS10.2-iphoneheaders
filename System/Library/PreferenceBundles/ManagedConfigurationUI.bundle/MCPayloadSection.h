/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface MCPayloadSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSMutableArray* _payloadInfos;

}

@property (nonatomic,retain) NSString * sectionTitle;                    //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                   //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSMutableArray * payloadInfos;              //@synthesize payloadInfos=_payloadInfos - In the implementation block
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
-(id)init;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3 ;
-(NSMutableArray *)payloadInfos;
-(void)setPayloadInfos:(NSMutableArray *)arg1 ;
@end

