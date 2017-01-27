/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData;

@interface MPImageDescriptor : NSObject <NSCoding> {

	float _quality;
	float _nextLeafDescriptorDistance;
	float _previousLeafDescriptorDistance;
	float _nextLeafTotalDistance;
	float _previousLeafTotalDistance;
	long long _descriptorId;
	NSString* _externalImageId;
	long long _exifTimestamp;
	void* _colorGaborDescriptor;
	void* _sceneClassifierDescriptor;
	void* _imageRegistrationDescriptor;
	long long _previousLeafId;
	long long _nextLeafId;
	long long _nextLeafTimestampDistance;
	long long _previousLeafTimestampDistance;
	NSString* _imageFilePath;

}

@property (assign) long long previousLeafId;                             //@synthesize previousLeafId=_previousLeafId - In the implementation block
@property (assign) long long nextLeafId;                                 //@synthesize nextLeafId=_nextLeafId - In the implementation block
@property (assign) float nextLeafDescriptorDistance;                     //@synthesize nextLeafDescriptorDistance=_nextLeafDescriptorDistance - In the implementation block
@property (assign) float previousLeafDescriptorDistance;                 //@synthesize previousLeafDescriptorDistance=_previousLeafDescriptorDistance - In the implementation block
@property (assign) long long nextLeafTimestampDistance;                  //@synthesize nextLeafTimestampDistance=_nextLeafTimestampDistance - In the implementation block
@property (assign) long long previousLeafTimestampDistance;              //@synthesize previousLeafTimestampDistance=_previousLeafTimestampDistance - In the implementation block
@property (assign) float nextLeafTotalDistance;                          //@synthesize nextLeafTotalDistance=_nextLeafTotalDistance - In the implementation block
@property (assign) float previousLeafTotalDistance;                      //@synthesize previousLeafTotalDistance=_previousLeafTotalDistance - In the implementation block
@property (readonly) NSData * rawColorGaborDescriptor; 
@property (readonly) NSString * imageFilePath;                           //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (readonly) long long descriptorId;                             //@synthesize descriptorId=_descriptorId - In the implementation block
@property (readonly) NSString * externalImageId;                         //@synthesize externalImageId=_externalImageId - In the implementation block
@property (readonly) long long exifTimestamp;                            //@synthesize exifTimestamp=_exifTimestamp - In the implementation block
@property (readonly) float quality;                                      //@synthesize quality=_quality - In the implementation block
@property (readonly) void* colorGaborDescriptor;                         //@synthesize colorGaborDescriptor=_colorGaborDescriptor - In the implementation block
@property (readonly) void* sceneClassifierDescriptor;                    //@synthesize sceneClassifierDescriptor=_sceneClassifierDescriptor - In the implementation block
@property (readonly) void* imageRegistrationDescriptor;                  //@synthesize imageRegistrationDescriptor=_imageRegistrationDescriptor - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(float)quality;
-(id)initWithImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(long long)exifTimestamp;
-(long long)descriptorId;
-(NSString *)imageFilePath;
-(NSString *)externalImageId;
-(float)distanceFromDescriptor:(id)arg1 ;
-(id)initWithRawColorGaborDescriptor:(id)arg1 ;
-(NSData *)rawColorGaborDescriptor;
-(void)setPreviousLeafId:(long long)arg1 ;
-(void)setNextLeafId:(long long)arg1 ;
-(void)setPreviousLeafDescriptorDistance:(float)arg1 ;
-(void)setNextLeafDescriptorDistance:(float)arg1 ;
-(void)setPreviousLeafTimestampDistance:(long long)arg1 ;
-(void)setNextLeafTimestampDistance:(long long)arg1 ;
-(void)setPreviousLeafTotalDistance:(float)arg1 ;
-(void)setNextLeafTotalDistance:(float)arg1 ;
-(BOOL)computeDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)computeConvnetDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)computeRegistrationFeaturesForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)initWithImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)computeQualityForImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void*)colorGaborDescriptor;
-(float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg1 andSceneClassifierDistance:(float)arg2 ;
-(id)initWithImageData:(id)arg1 andCustomQualityScore:(float)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void*)sceneClassifierDescriptor;
-(void*)imageRegistrationDescriptor;
-(long long)previousLeafId;
-(long long)nextLeafId;
-(float)nextLeafDescriptorDistance;
-(float)previousLeafDescriptorDistance;
-(long long)nextLeafTimestampDistance;
-(long long)previousLeafTimestampDistance;
-(float)nextLeafTotalDistance;
-(float)previousLeafTotalDistance;
@end

