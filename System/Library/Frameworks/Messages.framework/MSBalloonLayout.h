/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MSBalloonLayout <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) NSString * subcaption; 
@property (nonatomic,copy) NSString * trailingCaption; 
@property (nonatomic,copy) NSString * trailingSubcaption; 
@property (nonatomic,copy) NSString * secondarySubcaption; 
@property (nonatomic,copy) NSString * tertiarySubcaption; 
@optional
-(NSString *)secondarySubcaption;
-(void)setSecondarySubcaption:(id)arg1;
-(NSString *)tertiarySubcaption;
-(void)setTertiarySubcaption:(id)arg1;

@required
-(NSString *)caption;
-(void)setCaption:(id)arg1;
-(NSString *)subcaption;
-(void)setSubcaption:(id)arg1;
-(NSString *)trailingCaption;
-(void)setTrailingCaption:(id)arg1;
-(NSString *)trailingSubcaption;
-(void)setTrailingSubcaption:(id)arg1;

@end
