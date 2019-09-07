#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW_1-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/BubbleSort.o \
	${OBJECTDIR}/Character.o \
	${OBJECTDIR}/CharacterFactory.o \
	${OBJECTDIR}/CharacterVectorSortByHair.o \
	${OBJECTDIR}/CharacterVectorSortByName.o \
	${OBJECTDIR}/CharacterVectorSortByRace.o \
	${OBJECTDIR}/CharacterVectorSortBySpeed.o \
	${OBJECTDIR}/CharacterVectorSortable.o \
	${OBJECTDIR}/Game.o \
	${OBJECTDIR}/LargeCharacter.o \
	${OBJECTDIR}/LargeFactory.o \
	${OBJECTDIR}/MedCharacter.o \
	${OBJECTDIR}/MedFactory.o \
	${OBJECTDIR}/SmallCharacter.o \
	${OBJECTDIR}/SmallFactory.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project1_3.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project1_3.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project1_3 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/BubbleSort.o: BubbleSort.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BubbleSort.o BubbleSort.cpp

${OBJECTDIR}/Character.o: Character.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Character.o Character.cpp

${OBJECTDIR}/CharacterFactory.o: CharacterFactory.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterFactory.o CharacterFactory.cpp

${OBJECTDIR}/CharacterVectorSortByHair.o: CharacterVectorSortByHair.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterVectorSortByHair.o CharacterVectorSortByHair.cpp

${OBJECTDIR}/CharacterVectorSortByName.o: CharacterVectorSortByName.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterVectorSortByName.o CharacterVectorSortByName.cpp

${OBJECTDIR}/CharacterVectorSortByRace.o: CharacterVectorSortByRace.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterVectorSortByRace.o CharacterVectorSortByRace.cpp

${OBJECTDIR}/CharacterVectorSortBySpeed.o: CharacterVectorSortBySpeed.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterVectorSortBySpeed.o CharacterVectorSortBySpeed.cpp

${OBJECTDIR}/CharacterVectorSortable.o: CharacterVectorSortable.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CharacterVectorSortable.o CharacterVectorSortable.cpp

${OBJECTDIR}/Game.o: Game.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Game.o Game.cpp

${OBJECTDIR}/LargeCharacter.o: LargeCharacter.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LargeCharacter.o LargeCharacter.cpp

${OBJECTDIR}/LargeFactory.o: LargeFactory.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LargeFactory.o LargeFactory.cpp

${OBJECTDIR}/MedCharacter.o: MedCharacter.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MedCharacter.o MedCharacter.cpp

${OBJECTDIR}/MedFactory.o: MedFactory.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MedFactory.o MedFactory.cpp

${OBJECTDIR}/SmallCharacter.o: SmallCharacter.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SmallCharacter.o SmallCharacter.cpp

${OBJECTDIR}/SmallFactory.o: SmallFactory.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SmallFactory.o SmallFactory.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
