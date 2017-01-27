/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVPersistenceDelegate <NSObject>
@property (assign) unsigned activeFaceprintVersion; 
@required
-(unsigned)activeFaceprintVersion;
-(unsigned long long)countOfFaces;
-(unsigned long long)countOfClusteringEligibleFaces;
-(id)facesForFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(id)facesByFaceLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(id)unclusteredFaceLocalIdentifiersWithFaceprintVersion:(unsigned)arg1 error:(id*)arg2;
-(id)facesForClusteringWithFaceprintVersion:(unsigned)arg1 excludeClustered:(BOOL)arg2 maxCount:(unsigned long long)arg3 error:(id*)arg4;
-(id)facesForClusteringWithFaceprintVersion:(unsigned)arg1 minClusterSequenceNumber:(unsigned long long)arg2 maxClusterSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
-(id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned)arg2 excludeClustered:(BOOL)arg3;
-(id)facesByFaceLocalIdentifiers:(id)arg1 withFaceprintVersion:(unsigned)arg2 excludeClustered:(BOOL)arg3;
-(id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned)arg2;
-(id)facesForFaceClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned)arg2;
-(id)facesFromAsset:(id)arg1 error:(id*)arg2;
-(BOOL)resetClusterSequenceNumberOfAllFaces:(id*)arg1;
-(BOOL)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(void)removeExistingFacesFromCSNs:(id)arg1;
-(BOOL)persistFaces:(id)arg1 deleteFaces:(id)arg2 forAsset:(id)arg3 persistedFaces:(id*)arg4 error:(id*)arg5;
-(id)faceprintsByFaceLocalIdentifiers:(id)arg1 version:(unsigned)arg2 error:(id*)arg3;
-(id)allPersons:(id*)arg1;
-(id)personWithFaceLocalIdentifier:(id)arg1 error:(id*)arg2;
-(id)personsForLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(id)facesForPersonWithLocalIdentifier:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 error:(id*)arg4;
-(id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
-(id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
-(id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id*)arg2;
-(unsigned long long)countOfAlgorithmicFaceGroups:(id*)arg1;
-(id)allAlgorithmicFaceGroups:(id*)arg1;
-(id)allAlgorithmicFaceGroupsAsClusterSequenceNumbers:(id*)arg1;
-(id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id*)arg3;
-(id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(id)clusterSequenceNumbersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id*)arg3;
-(id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(BOOL)arg2 error:(id*)arg3;
-(BOOL)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:(id)arg1 error:(id*)arg2;
-(BOOL)persistChangesToAlgorithmicFaceGroups:(id)arg1 andFaces:(id)arg2 withCanceler:(id)arg3 returningPersistedClusters:(id*)arg4 faceGroupsWithoutKeyFace:(id*)arg5 csnsToBeRemovedFromClusterState:(id)arg6 toBeReclusteredFaceIds:(id)arg7 error:(id*)arg8;
-(BOOL)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
-(BOOL)deleteFaceGroupsOfType:(long long)arg1 error:(id*)arg2;
-(BOOL)deleteSingletonAndEmptyGroupsOfType:(long long)arg1 error:(id*)arg2;
-(BOOL)deleteEmptyGroupsOfType:(long long)arg1 error:(id*)arg2;
-(void)autonameFaceClusters:(id)arg1 faceComparer:(id)arg2 recallThreshold:(float)arg3;
-(void)logPVErrorMessage:(id)arg1;
-(void)logPVWarningMessage:(id)arg1;
-(void)logPVInfoMessage:(id)arg1;
-(void)logPVDebugMessage:(id)arg1;
-(void)setActiveFaceprintVersion:(unsigned)arg1;

@end

