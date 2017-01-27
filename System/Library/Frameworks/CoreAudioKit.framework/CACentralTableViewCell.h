/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIActivityIndicatorView, NSArray;

@interface CACentralTableViewCell : UITableViewCell {

	UILabel* _deviceNameLabel;
	UILabel* _connectionStatusLabel;
	UILabel* _inputLabel;
	UILabel* _slashLabel;
	UILabel* _outputLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSArray* _labelConstraints;
	NSArray* _activityHConstraints;
	NSArray* _activityVConstraints;

}

@property (nonatomic,retain) UILabel * deviceNameLabel;                                //@synthesize deviceNameLabel=_deviceNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * connectionStatusLabel;                          //@synthesize connectionStatusLabel=_connectionStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * inputLabel;                                     //@synthesize inputLabel=_inputLabel - In the implementation block
@property (nonatomic,retain) UILabel * slashLabel;                                     //@synthesize slashLabel=_slashLabel - In the implementation block
@property (nonatomic,retain) UILabel * outputLabel;                                    //@synthesize outputLabel=_outputLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                               //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,retain) NSArray * activityHConstraints;                           //@synthesize activityHConstraints=_activityHConstraints - In the implementation block
@property (nonatomic,retain) NSArray * activityVConstraints;                           //@synthesize activityVConstraints=_activityVConstraints - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(void)createInitialConstraints;
-(void)setActivityHConstraints:(NSArray *)arg1 ;
-(void)setActivityVConstraints:(NSArray *)arg1 ;
-(NSArray *)activityHConstraints;
-(NSArray *)activityVConstraints;
-(void)startIndicator;
-(void)stopIndicator;
-(UILabel *)deviceNameLabel;
-(void)setDeviceNameLabel:(UILabel *)arg1 ;
-(UILabel *)connectionStatusLabel;
-(void)setConnectionStatusLabel:(UILabel *)arg1 ;
-(UILabel *)inputLabel;
-(void)setInputLabel:(UILabel *)arg1 ;
-(UILabel *)slashLabel;
-(void)setSlashLabel:(UILabel *)arg1 ;
-(UILabel *)outputLabel;
-(void)setOutputLabel:(UILabel *)arg1 ;
@end

