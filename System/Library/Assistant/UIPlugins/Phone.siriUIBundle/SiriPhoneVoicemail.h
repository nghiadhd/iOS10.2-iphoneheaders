/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/SiriPhoneCall.h>

@class SAPhoneVoiceMail, NSURL;

@interface SiriPhoneVoicemail : SiriPhoneCall {

	SAPhoneVoiceMail* _voicemail;

}

@property (nonatomic,retain) SAPhoneVoiceMail * voicemail;              //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,readonly) NSURL * identifier; 
-(id)statusImage;
-(SAPhoneVoiceMail *)voicemail;
-(void)_setFormattedDuration;
-(NSURL *)identifier;
-(id)date;
-(void)setVoicemail:(SAPhoneVoiceMail *)arg1 ;
@end

