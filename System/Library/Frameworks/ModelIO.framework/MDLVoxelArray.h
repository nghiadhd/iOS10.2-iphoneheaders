/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>

@interface MDLVoxelArray : MDLObject {

	unordered_map<unsigned long long, int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int> > >* _voxels;
	SCD_Struct_MD20 _extent;
	MDLAABB _bounds;
	float _voxelExtent;
	MortonCode* mortonCoder;
	unique_ptr<ModelIO::Octree, std::__1::default_delete<ModelIO::Octree> >* _octreeData;
	BOOL _levelSet;
	float _interiorThickness;
	float _exteriorThickness;
	 _originatingOffset;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) SCD_Struct_MD20 voxelIndexExtent;              //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD20 boundingBox; 
@property (nonatomic,readonly) BOOL isValidSignedShellField; 
@property (assign,nonatomic) float shellFieldInteriorThickness;               //@synthesize interiorThickness=_interiorThickness - In the implementation block
@property (assign,nonatomic) float shellFieldExteriorThickness;               //@synthesize exteriorThickness=_exteriorThickness - In the implementation block
-(id)init;
-(unsigned long long)count;
-(SCD_Struct_MD20)boundingBox;
-(id)initWithData:(id)arg1 boundingBox:(SCD_Struct_MD20)arg2 voxelExtent:(float)arg3 ;
-(void)recalculateExtents;
-(3)spatialLocationOfIndex:;
-(void)dilateNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2 ;
-(void)erodeNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2 ;
-(id)coarseMeshUsingAllocator:(id)arg1 ;
-(SCD_Struct_MD20)voxelIndexExtent;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3 ;
-(void)convertToSignedShellField;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3 ;
-(BOOL)voxelExistsAtIndex:(BOOL)arg1 allowAnyX:(BOOL)arg2 allowAnyY:(BOOL)arg3 allowAnyZ:(BOOL)arg4 ;
-(id)voxelsWithinExtent:(SCD_Struct_MD20)arg1 ;
-(id)voxelIndices;
-(void)setVoxelAtIndex:;
-(void)unionWithVoxels:(id)arg1 ;
-(void)intersectWithVoxels:(id)arg1 ;
-(void)differenceWithVoxels:(id)arg1 ;
-(3)indexOfSpatialLocation:;
-(SCD_Struct_MD20)voxelBoundingBoxAtIndex:;
-(BOOL)isValidSignedShellField;
-(void)setShellFieldInteriorThickness:(float)arg1 ;
-(void)setShellFieldExteriorThickness:(float)arg1 ;
-(id)coarseMesh;
-(id)meshUsingAllocator:(id)arg1 ;
-(id)coarseVoxelMeshWithStyle:(unsigned long long)arg1 ;
-(vector<int, std::__1::allocator<int> >*)boxesPerLayer;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5 ;
-(id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5 ;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5 ;
-(void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5 ;
-(float)shellFieldInteriorThickness;
-(float)shellFieldExteriorThickness;
@end

