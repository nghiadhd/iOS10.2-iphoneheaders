/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsCell.h>

@protocol CKDetailsContactsTableViewCellDelegate;
@class CKAvatarView, NSMutableArray, UILabel, NSString, UIButton, CNContact;

@interface CKDetailsContactsTableViewCell : CKDetailsCell {

	BOOL _showsLocation;
	BOOL _showMessageButton;
	BOOL _showPhoneButton;
	BOOL _showFaceTimeVideoButton;
	BOOL _showInfoButton;
	CKAvatarView* _contactAvatarView;
	id<CKDetailsContactsTableViewCellDelegate> _delegate;
	NSMutableArray* _visibleButtons;
	UILabel* _nameLabel;
	UILabel* _locationLabel;
	NSString* _entityName;
	NSString* _locationString;
	UIButton* _messageButton;
	UIButton* _phoneButton;
	UIButton* _facetimeVideoButton;
	CNContact* _contact;

}

@property (nonatomic,retain) NSMutableArray * visibleButtons;                                         //@synthesize visibleButtons=_visibleButtons - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                     //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                                 //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) CKAvatarView * contactAvatarView;                                        //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,copy) NSString * entityName;                                                     //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,copy) NSString * locationString;                                                 //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL showsLocation;                                                      //@synthesize showsLocation=_showsLocation - In the implementation block
@property (assign,nonatomic) BOOL showMessageButton;                                                  //@synthesize showMessageButton=_showMessageButton - In the implementation block
@property (assign,nonatomic) BOOL showPhoneButton;                                                    //@synthesize showPhoneButton=_showPhoneButton - In the implementation block
@property (assign,nonatomic) BOOL showFaceTimeVideoButton;                                            //@synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton - In the implementation block
@property (assign,nonatomic) BOOL showInfoButton;                                                     //@synthesize showInfoButton=_showInfoButton - In the implementation block
@property (nonatomic,retain) UIButton * messageButton;                                                //@synthesize messageButton=_messageButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneButton;                                                  //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) UIButton * facetimeVideoButton;                                          //@synthesize facetimeVideoButton=_facetimeVideoButton - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                     //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsContactsTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
+(double)preferredHeight;
+(double)marginWidth;
-(void)layoutSubviews;
-(void)setDelegate:(id<CKDetailsContactsTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKDetailsContactsTableViewCellDelegate>)delegate;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(CNContact *)contact;
-(NSString *)entityName;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setShowsLocation:(BOOL)arg1 ;
-(BOOL)showsLocation;
-(void)configureWithViewModel:(id)arg1 ;
-(CKAvatarView *)contactAvatarView;
-(void)setMessageButton:(UIButton *)arg1 ;
-(void)setPhoneButton:(UIButton *)arg1 ;
-(void)setFacetimeVideoButton:(UIButton *)arg1 ;
-(UIButton *)messageButton;
-(UIButton *)phoneButton;
-(UIButton *)facetimeVideoButton;
-(void)setContactAvatarView:(CKAvatarView *)arg1 ;
-(NSMutableArray *)visibleButtons;
-(void)_updateVisibleButtons;
-(void)setShowFaceTimeVideoButton:(BOOL)arg1 ;
-(void)setShowMessageButton:(BOOL)arg1 ;
-(void)setShowPhoneButton:(BOOL)arg1 ;
-(void)_handleCommunicationAction:(id)arg1 ;
-(BOOL)showPhoneButton;
-(BOOL)showMessageButton;
-(BOOL)showFaceTimeVideoButton;
-(void)setShowInfoButton:(BOOL)arg1 ;
-(void)setVisibleButtons:(NSMutableArray *)arg1 ;
-(BOOL)showInfoButton;
-(void)setContact:(CNContact *)arg1 ;
@end

