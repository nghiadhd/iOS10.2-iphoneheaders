/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>

@protocol MDLMeshBufferAllocator;
@class NSMutableArray, MDLVertexDescriptor, NSArray;

@interface MDLMesh : MDLObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	MDLVertexDescriptor* _vertexDescriptor;
	MDLAABB _bounds;
	NSArray* _controlNodes;
	id<MDLMeshBufferAllocator> _allocator;
	unsigned long long _vertexCount;

}

@property (nonatomic,readonly) SCD_Struct_MD20 boundingBox; 
@property (nonatomic,copy) MDLVertexDescriptor * vertexDescriptor; 
@property (assign,nonatomic) unsigned long long vertexCount;                             //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,retain) NSArray * vertexBuffers; 
@property (nonatomic,copy) NSMutableArray * submeshes; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
+(id)meshWithSCNGeometry:(id)arg1 bufferAllocator:(id)arg2 ;
+(id)meshWithSCNGeometry:(id)arg1 ;
+(id)newEllipticalConeWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(BOOL)arg5 inwardNormals:(id)arg6 ;
+(id)newBoxWithDimensions:(long long)arg1 segments:(BOOL)arg2 geometryType:(id)arg3 ;
+(id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(BOOL)arg2 geometryType:(long long)arg3 allocator:(id)arg4 ;
+(id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(BOOL)arg2 allocator:(id)arg3 ;
+(id)newEllipsoidWithRadii:(unsigned long long)arg1 radialSegments:(unsigned long long)arg2 verticalSegments:(long long)arg3 geometryType:(BOOL)arg4 inwardNormals:(BOOL)arg5 hemisphere:(id)arg6 ;
+(id)newSubdividedMesh:(id)arg1 submeshIndex:(unsigned long long)arg2 subdivisionLevels:(unsigned long long)arg3 ;
+(id)newCapsuleWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(unsigned long long)arg4 hemisphereSegments:(long long)arg5 geometryType:(BOOL)arg6 inwardNormals:(id)arg7 ;
+(id)newPlaneWithDimensions:(long long)arg1 segments:(id)arg2 ;
+(id)newCylinderWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(BOOL)arg5 inwardNormals:(id)arg6 ;
-(SCD_Struct_MD20)boundingBox;
-(unsigned long long)vertexCount;
-(void)setVertexCount:(unsigned long long)arg1 ;
-(id)initWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4 ;
-(id)vertexAttributeDataForAttributeNamed:(id)arg1 asFormat:(unsigned long long)arg2 ;
-(id)vertexAttributeDataForAttributeNamed:(id)arg1 ;
-(void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5 ;
-(void)setSubmeshes:(NSMutableArray *)arg1 ;
-(id)initConeWithExtent:(BOOL)arg1 segments:(BOOL)arg2 inwardNormals:(long long)arg3 cap:(id)arg4 ;
-(void)_createWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4 ;
-(id)initBoxWithExtent:(BOOL)arg1 segments:(long long)arg2 inwardNormals:(id)arg3 ;
-(id)initIcosahedronWithExtent:(BOOL)arg1 inwardNormals:(long long)arg2 geometryType:(id)arg3 ;
-(id)initHemisphereWithExtent:(BOOL)arg1 segments:(BOOL)arg2 inwardNormals:(long long)arg3 cap:(id)arg4 ;
-(id)initSphereWithExtent:(BOOL)arg1 segments:(long long)arg2 inwardNormals:(id)arg3 ;
-(id)initMeshBySubdividingMesh:(id)arg1 submeshIndex:(int)arg2 subdivisionLevels:(unsigned)arg3 allocator:(id)arg4 ;
-(id)initCapsuleWithExtent:(unsigned)arg1 cylinderSegments:(BOOL)arg2 hemisphereSegments:(long long)arg3 inwardNormals:(id)arg4 ;
-(id)initPlaneWithExtent:(long long)arg1 segments:(id)arg2 ;
-(void)makeVerticesUnique;
-(void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 ;
-(void)updateAttributeNamed:(id)arg1 withData:(id)arg2 ;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(void)removeAttributeNamed:(id)arg1 ;
-(void)createSourceDataVector:(vector<float, std::__1::allocator<float> >*)arg1 attr:(id)arg2 srcElementCount:(int)arg3 dstElementCount:(int)arg4 ;
-(void)setVertexBuffers:(NSArray *)arg1 ;
-(void)copyDataVector:(vector<float, std::__1::allocator<float> >*)arg1 toAttr:(id)arg2 ;
-(void)_calculateTangentBasisFromPositions:(float*)arg1 positionStride:(long long)arg2 normals:(float*)arg3 normalStride:(long long)arg4 uvs:(float*)arg5 uvStride:(long long)arg6 tangents:(float*)arg7 tangentsStride:(long long)arg8 bitagents:(float*)arg9 bitangentStride:(long long)arg10 ;
-(void)replaceAttributeNamed:(id)arg1 withData:(id)arg2 ;
-(void)_calculateFaceNormalsFromPositions:(float*)arg1 positionStride:(long long)arg2 normals:(float*)arg3 normalStride:(long long)arg4 creaseThreshold:(float)arg5 ;
-(void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 type:(id)arg3 data:(id)arg4 stride:(long long)arg5 time:(double)arg6 ;
-(void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 bitangentAttributeNamed:(id)arg3 ;
-(void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3 ;
-(void)addUnwrappedTextureCoordinatesForAttributeNamed:(id)arg1 ;
-(void)_enumerateSubmeshesUsingBlock:(/*^block*/id)arg1 stopPointer:(BOOL*)arg2 ;
-(int)submeshCount;
-(void)enumerateSubmeshesUsingBlock:(/*^block*/id)arg1 ;
-(id)controlNodeForINdex:(unsigned long long)arg1 ;
-(SCD_Struct_MD1)inverseBasePoseForIndex:(unsigned long long)arg1 ;
-(BOOL)generateAmbientOcclusionTextureWithSize:(long long)arg1 raysPerSample:(float)arg2 attenuationFactor:(id)arg3 objectsToConsider:(id)arg4 vertexAttributeNamed:(id)arg5 ;
-(BOOL)generateAmbientOcclusionVertexColorsWithRaysPerSample:(long long)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 ;
-(BOOL)generateLightMapTextureWithTextureSize:(id)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 ;
-(id)initCylinderWithExtent:(BOOL)arg1 segments:(BOOL)arg2 inwardNormals:(BOOL)arg3 topCap:(long long)arg4 bottomCap:(id)arg5 ;
-(id<MDLMeshBufferAllocator>)allocator;
-(MDLVertexDescriptor *)vertexDescriptor;
-(void)setVertexDescriptor:(MDLVertexDescriptor *)arg1 ;
-(id)initWithBufferAllocator:(id)arg1 ;
-(id)initWithVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4 ;
-(BOOL)generateAmbientOcclusionVertexColorsWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 ;
-(BOOL)generateAmbientOcclusionTextureWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5 ;
-(BOOL)generateLightMapVertexColorsWithLightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 ;
-(BOOL)generateLightMapTextureWithQuality:(float)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5 ;
-(NSArray *)vertexBuffers;
-(NSMutableArray *)submeshes;
-(void)addNormalsWithAttributeNamed:(id)arg1 creaseThreshold:(float)arg2 ;
@end

