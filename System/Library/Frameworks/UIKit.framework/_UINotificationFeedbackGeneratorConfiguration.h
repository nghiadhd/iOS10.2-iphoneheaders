/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	BOOL _includePrivateEvents;
	NSDictionary* _feedbacks;

}

@property (assign,nonatomic) BOOL includePrivateEvents;              //@synthesize includePrivateEvents=_includePrivateEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * feedbacks;               //@synthesize feedbacks=_feedbacks - In the implementation block
+(id)privateConfiguration;
+(id)defaultConfiguration;
-(NSDictionary *)feedbacks;
-(void)setFeedbacks:(NSDictionary *)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(BOOL)defaultEnabled;
-(BOOL)includePrivateEvents;
-(void)setIncludePrivateEvents:(BOOL)arg1 ;
@end

