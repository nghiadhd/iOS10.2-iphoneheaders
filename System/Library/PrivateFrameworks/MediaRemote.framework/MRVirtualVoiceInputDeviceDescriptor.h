/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSDictionary, NSData, _MRVoiceInputDeviceDescriptorProtobuf;

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying> {

	NSArray* _supportedFormats;
	NSDictionary* _defaultFormat;

}

@property (nonatomic,readonly) NSArray * supportedFormats;                                    //@synthesize supportedFormats=_supportedFormats - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultFormat;                                  //@synthesize defaultFormat=_defaultFormat - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) _MRVoiceInputDeviceDescriptorProtobuf * protobuf; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)defaultFormat;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)supportedFormats;
-(id)initWithProtobuf:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(_MRVoiceInputDeviceDescriptorProtobuf *)protobuf;
@end

