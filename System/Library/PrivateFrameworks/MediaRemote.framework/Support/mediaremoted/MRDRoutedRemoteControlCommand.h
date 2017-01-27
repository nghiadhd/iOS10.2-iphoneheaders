/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDRemoteControlCommand.h>

@class NSString;

@interface MRDRoutedRemoteControlCommand : MRDRemoteControlCommand {

	NSString* _routedAppDisplayID;

}

@property (nonatomic,readonly) NSString * routedAppDisplayID;              //@synthesize routedAppDisplayID=_routedAppDisplayID - In the implementation block
-(id)initWithCommand:(id)arg1 routedApp:(id)arg2 ;
-(NSString *)routedAppDisplayID;
-(void)dealloc;
-(id)description;
@end

