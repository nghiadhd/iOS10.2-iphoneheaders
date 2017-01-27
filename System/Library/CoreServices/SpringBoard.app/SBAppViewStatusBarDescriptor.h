/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBAppViewStatusBarDescriptor : NSObject {

	BOOL _forceHidden;
	NSString* _breadcrumbTitle;
	NSString* _breadcrumbSecondaryTitle;

}

@property (assign,getter=isForcedHidden,nonatomic) BOOL forceHidden;              //@synthesize forceHidden=_forceHidden - In the implementation block
@property (nonatomic,copy) NSString * breadcrumbTitle;                            //@synthesize breadcrumbTitle=_breadcrumbTitle - In the implementation block
@property (nonatomic,copy) NSString * breadcrumbSecondaryTitle;                   //@synthesize breadcrumbSecondaryTitle=_breadcrumbSecondaryTitle - In the implementation block
+(id)statusBarDescriptorWithForceHidden:(BOOL)arg1 ;
-(id)initWithForceHidden:(BOOL)arg1 ;
-(NSString *)breadcrumbTitle;
-(NSString *)breadcrumbSecondaryTitle;
-(BOOL)isForcedHidden;
-(void)setForceHidden:(BOOL)arg1 ;
-(void)setBreadcrumbTitle:(NSString *)arg1 ;
-(void)setBreadcrumbSecondaryTitle:(NSString *)arg1 ;
-(id)debugDescription;
@end

