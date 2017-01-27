/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>
#import <libobjc.A.dylib/CNActionViewProtocol.h>

@protocol CNPropertyCellDelegate;
@class CNUIUserActionListDataSource, UILabel, CNActionView, NSString;

@interface CNFaceTimeCell : CNLabeledCell <CNUIUserActionListConsumer, CNActionViewProtocol> {

	BOOL _isFaceTimeAudioAvailable;
	CNUIUserActionListDataSource* _actionsDataSource;
	id<CNPropertyCellDelegate> _delegate;
	UILabel* _faceTimeLabel;
	CNActionView* _actionView1;
	CNActionView* _actionView2;

}

@property (nonatomic,readonly) UILabel * faceTimeLabel;                                     //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL isFaceTimeAudioAvailable;                                 //@synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable - In the implementation block
@property (nonatomic,readonly) CNActionView * actionView1;                                  //@synthesize actionView1=_actionView1 - In the implementation block
@property (nonatomic,readonly) CNActionView * actionView2;                                  //@synthesize actionView2=_actionView2 - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionsDataSource;              //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<CNPropertyCellDelegate>)delegate;
-(void)tintColorDidChange;
-(BOOL)isFaceTimeAudioAvailable;
-(id)variableConstraints;
-(double)minCellHeight;
-(id)constantConstraints;
-(id)rightMostView;
-(void)performDefaultAction;
-(CNUIUserActionListDataSource *)actionsDataSource;
-(void)setActionsDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)setIsFaceTimeAudioAvailable:(BOOL)arg1 ;
-(CNActionView *)actionView1;
-(CNActionView *)actionView2;
-(UILabel *)faceTimeLabel;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(id)labelView;
@end

