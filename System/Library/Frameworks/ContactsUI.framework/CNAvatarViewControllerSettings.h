/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIPRLikenessResolver;
@class CNContactStore, PRPersonaStore;

@interface CNAvatarViewControllerSettings : NSObject {

	BOOL _threeDTouchEnabled;
	CNContactStore* _contactStore;
	id<CNUIPRLikenessResolver> _likenessResolver;
	PRPersonaStore* _personaStore;

}

@property (nonatomic,retain) id<CNUIPRLikenessResolver> likenessResolver;              //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                            //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                            //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                                  //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
+(id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3 ;
+(id)settingsWithContactStore:(id)arg1 ;
+(id)settingsWithLikenessResolver:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(BOOL)threeDTouchEnabledDefaultValue;
+(id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
+(id)defaultSettings;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(BOOL)threeDTouchEnabled;
-(id)initWithLikenessResolver:(id)arg1 threeDTouchEnabled:(BOOL)arg2 ;
-(CNContactStore *)contactStore;
-(PRPersonaStore *)personaStore;
-(void)setLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

