/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVOutputContextInternal, NSString;

@interface AVOutputContext : NSObject <NSSecureCoding> {

	AVOutputContextInternal* _outputContext;

}

@property (nonatomic,readonly) NSString * deviceName; 
+(BOOL)supportsSecureCoding;
+(id)outputContext;
+(OpaqueFigEndpointPickerRef)copySystemVideoPicker;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(void)resetOutputDeviceForAllOutputContexts;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)_weakReference;
-(id)initWithContextUUID:(id)arg1 ;
-(id)contextUUID;
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(void)_handlePickerServerConnectionDiedNotification;
-(id)initWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(id)outputDevice;
-(int)applicationProcessID;
-(void)setApplicationProcessID:(int)arg1 ;
-(id)associatedAudioDeviceID;
-(BOOL)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2 ;
-(NSString *)deviceName;
-(void)finalize;
@end
