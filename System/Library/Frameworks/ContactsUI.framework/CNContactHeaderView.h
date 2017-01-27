/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CNContactPhotoViewDelegate.h>
#import <libobjc.A.dylib/CNUIReusableView.h>

@protocol CNPresenterDelegate, CNContactHeaderViewDelegate;
@class NSDictionary, UILabel, NSArray, CNContactPhotoView, NSString;

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {

	BOOL _needsReload;
	BOOL _shouldUseExpandedContentStyle;
	BOOL _alwaysShowsMonogram;
	BOOL _visibleToScrollViews;
	NSDictionary* _nameTextAttributes;
	id<CNPresenterDelegate> _delegate;
	id<CNContactHeaderViewDelegate> _headerDelegate;
	UILabel* _nameLabel;
	NSArray* _activatedConstraints;
	NSArray* _contacts;
	CNContactPhotoView* _photoView;
	UIEdgeInsets _contentMargins;

}

@property (nonatomic,retain) UILabel * nameLabel;                                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                                     //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                 //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) CNContactPhotoView * photoView;                                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowsMonogram;                                           //@synthesize alwaysShowsMonogram=_alwaysShowsMonogram - In the implementation block
@property (assign,nonatomic) BOOL visibleToScrollViews;                                          //@synthesize visibleToScrollViews=_visibleToScrollViews - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargins;                                        //@synthesize contentMargins=_contentMargins - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                                    //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactHeaderViewDelegate> headerDelegate;              //@synthesize headerDelegate=_headerDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseExpandedContentStyle;                                 //@synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1 ;
+(id)descriptorForRequiredKeys;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<CNPresenterDelegate>)delegate;
-(BOOL)canBecomeFirstResponder;
-(void)updateConstraints;
-(void)prepareForReuse;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)updateFontSizes;
-(UIEdgeInsets)contentMargins;
-(NSDictionary *)nameTextAttributes;
-(BOOL)alwaysShowsMonogram;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 monogrammerStyle:(long long)arg3 ;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(void)setAlwaysShowsMonogram:(BOOL)arg1 ;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(BOOL)shouldUseExpandedContentStyle;
-(void)setShouldUseExpandedContentStyle:(BOOL)arg1 ;
-(void)updateWithNewContact:(id)arg1 ;
-(NSArray *)activatedConstraints;
-(void)reloadDataIfNeeded;
-(id<CNContactHeaderViewDelegate>)headerDelegate;
-(void)photoViewDidUpdate:(id)arg1 ;
-(id)viewControllerForPhotoView:(id)arg1 ;
-(id)contactStoreForPhotoView:(id)arg1 ;
-(void)saveContactPhoto;
-(BOOL)shouldOffsetPhotoView;
-(void)setHeaderDelegate:(id<CNContactHeaderViewDelegate>)arg1 ;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(BOOL)visibleToScrollViews;
-(void)setVisibleToScrollViews:(BOOL)arg1 ;
-(void)updateWithContacts:(id)arg1 ;
-(CNContactPhotoView *)photoView;
-(void)setNeedsReload;
-(id)descriptorForRequiredKeys;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end

