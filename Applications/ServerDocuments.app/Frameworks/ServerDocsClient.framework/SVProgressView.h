/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:59:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@interface SVProgressView : UIButton {

	BOOL _indeterminate;
	double _progress;

}

@property (assign,nonatomic) double progress;                 //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
-(void)updateLayerPropertiesAnimated:(BOOL)arg1 ;
-(BOOL)hasIntermediateState;
-(BOOL)indeterminate;
-(void)awakeFromNib;
-(void)tintColorDidChange;
-(void)setProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(void)setIndeterminate:(BOOL)arg1 ;
@end

