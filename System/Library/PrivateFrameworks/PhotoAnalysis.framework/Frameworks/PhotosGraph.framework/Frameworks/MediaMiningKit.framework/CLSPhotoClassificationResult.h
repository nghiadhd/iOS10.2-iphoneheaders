/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CLSPhotoClassificationResult : NSObject <NSCoding> {

	float _confidence;
	int _identifier;
	NSString* _name;

}

@property (readonly) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (readonly) int identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(int)identifier;
-(float)confidence;
-(id)initWithIdentifier:(int)arg1 name:(id)arg2 confidence:(float)arg3 ;
@end

